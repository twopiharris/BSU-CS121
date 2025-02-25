DROP TABLE IF EXISTS contacts;

CREATE TABLE contacts(
  id integer primary key,
  name varchar(20),
  email varchar(20),
  company varchar(20)
);

INSERT INTO contacts VALUES(null, 'Andy Harris', 'andy@aharrisbooks.net', 'IUPUI');
INSERT INTO contacts VALUES(null, 'Bill Gates', 'bill@microsoft.com', 'Microsoft');
INSERT INTO contacts VALUES(null, 'Linus Torvalds', 'linus@linux.org', 'Linux Foundation');

SELECT * FROM contacts;
SELECT name, email FROM contacts;

SELECT 
  name as 'Person',
  email as 'Email Address'
FROM contacts;


SELECT * FROM contacts WHERE company = 'Microsoft';
SELECT * FROM contacts WHERE name like '%Andy%';

