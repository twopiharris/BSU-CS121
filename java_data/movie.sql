-- your code goes here

DROP TABLE IF EXISTS badMovie;
CREATE TABLE badMovie (
  name VARCHAR(20),
  director VARCHAR(20),
  actors VARCHAR(100),
  age int,
  rating VARCHAR(5),
  genre VARCHAR(20)
);

INSERT into badMovie VALUES(
  "Frozen",
  "Chris Buck",
  "Kristen Bell, Idena Menzell, Jonathan Groff",
  2,
  "PG",
  "children's, animated"
);

INSERT into badMovie VALUES(
  "Guardians of the Galaxy",
  "James Gunn",
  "Chris Pratt, Vinn Diesel, Bradley Cooper",
  1,
  "PG-13",
  "action, superhero"
);

SELECT * from badMovie;


-- better version

DROP TABLE IF EXISTS rating;
CREATE TABLE rating(
  ratingId integer primary key,
  name varchar(5)
);

INSERT INTO rating VALUES(null, "G");
INSERT INTO rating VALUES(null, "PG");
INSERT INTO rating VALUES(null, "PG-13");
INSERT INTO rating VALUES(null, "R");
INSERT INTO rating VALUES(null, "NC-17");

--SELECT * from rating;

DROP TABLE IF EXISTS movie;

CREATE TABLE movie(
  movieId integer primary key,
  name varchar(20),
  year integer,
  ratingID integer
);

INSERT INTO movie VALUES(null, "Frozen", 2013, 2);
INSERT INTO movie VALUES(null, "Guardians of the Galaxy", 2014, 3);

--SELECT * FROM movie;

/*
--cartesian join
SELECT
  movie.name AS 'movie',
  movie.ratingId AS 'movie ratingId',
  rating.ratingId AS 'rating ratingId',
  rating.name AS 'rating'
FROM
  movie,
  rating;
*/

-- inner join

/*
SELECT
  movie.name AS 'movie',
  rating.name AS 'rating'
FROM
  movie, rating
WHERE
  movie.ratingId = rating.ratingId;
*/

-- view
DROP VIEW IF EXISTS movieRatingView;
CREATE view movieRatingView AS

SELECT
  movie.name AS 'movie',
  rating.name AS 'rating'
FROM
  movie, rating
WHERE
  movie.ratingId = rating.ratingId;

-- SELECT * FROM movieRatingView;

-- people table
DROP TABLE IF EXISTS person;
CREATE TABLE person (
  personID integer primary key,
  lName varchar(20),
  fName varchar(20)
);

INSERT INTO person VALUES (null, 'Buck', 'Chris');
INSERT INTO person VALUES (null, 'Bell', 'Kristen');
INSERT INTO person VALUES (null, 'Mendez', 'Idena');
INSERT INTO person VALUES (null, 'Groff', 'Jonathan');
INSERT INTO person VALUES (null, 'Gunn', 'James');
INSERT INTO person VALUES (null, 'Pratt', 'Chris');
INSERT INTO person VALUES (null, 'Diesel', 'Vinn');
INSERT INTO person VALUES (null, 'Cooper', 'Bradley');

-- SELECT * FROM person;

-- movie_director link table

DROP TABLE IF EXISTS movie_director;
CREATE TABLE movie_director(
  movie_directorId integer primary key,
  movieId integer,
  directorId integer
);

INSERT INTO movie_director VALUES(null, 1, 1);
INSERT INTO movie_director VALUES(null, 2, 5);

DROP VIEW IF EXISTS movieDirectorView;
CREATE VIEW movieDirectorView AS
SELECT
  movie.name AS 'movie',
  person.fName || ' ' || person.lName AS 'director'
FROM
  movie, person, movie_director
WHERE
  movie.movieId = movie_director.movieId
AND
  person.personId == movie_director.directorId;

-- SELECT * from movieDirectorView;

-- Actors

DROP TABLE IF EXISTS movie_actor;
CREATE TABLE movie_actor(
  movie_actorId integer primary key,
  movieId integer,
  actorId integer
);

INSERT INTO movie_actor VALUES(null, 1, 2);
INSERT INTO movie_actor VALUES(null, 1, 3);
INSERT INTO movie_actor VALUES(null, 1, 4);
INSERT INTO movie_actor VALUES(null, 2, 6);
INSERT INTO movie_actor VALUES(null, 2, 7);
INSERT INTO movie_actor VALUES(null, 2, 8);

-- movieActor view
DROP VIEW IF EXISTS movieActorView;
CREATE VIEW movieActorView AS
SELECT 
  movie.name as 'movie',
  person.fName || ' ' || person.lName as 'actor'
FROM 
  movie,
  person,
  movie_actor
WHERE
  movie.movieId = movie_actor.movieId
AND
  person.personId = movie_actor.actorId;

-- SELECT * FROM movieActorView;

-- refining output
/*
SELECT 
  actor 
FROM 
  movieActorView
WHERE
  movie = 'Frozen';
*/

