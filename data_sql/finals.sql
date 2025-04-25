DROP table if exists cell;
CREATE table cell (
	name varchar(2) primary key,
	start_time varchar(10),
	end_time varchar(10),
        day varchar(10)
);

INSERT into cell VALUES ('A1', '7:30', '9:30', 'Tuesday');
INSERT into cell VALUES ('B1', '7:30', '9:30', 'Wednesday');
INSERT into cell VALUES ('C1', '7:30', '9:30', 'Thursday');
INSERT into cell VALUES ('D1', '7:30', '9:30', 'Friday');

SELECT * FROM cell;

DROP table if exists session;
CREATE table session (
	id integer primary key,
	credits integer,
	start_time varchar(10),
	days varchar(10),
	comment varchar(20),
	cell varchar(2)
);

INSERT INTO session VALUES(null, 2,'8', 'TR', 'R', 'B1');
INSERT INTO session VALUES(null, 3,'8', 'TR', '', 'B1');
INSERT INTO session VALUES(null, 4,'8', 'ANY', 'R', 'B1');

INSERT INTO session VALUES(null, 2,'8', 'MWF', '', 'C1');
INSERT INTO session VALUES(null, 2,'8', 'MW', '', 'C1');
INSERT INTO session VALUES(null, 2,'8', 'WF', 'R', 'C1');
INSERT INTO session VALUES(null, 3,'8', 'MWF', '', 'C1');
INSERT INTO session VALUES(null, 5,'8', 'ANY', '', 'C1');


SELECT * FROM session;

DROP VIEW IF EXISTS cell_session;
CREATE VIEW cell_session AS
  SELECT
    session.credits AS 'credit hours',
    session.start_time AS 'class time',
    session.days AS 'class days',
    cell.start_time AS 'exam time',
    cell.day AS 'exam day'
  FROM cell, session
  WHERE cell.name= session.cell;

SELECT * FROM cell_session;

