-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 29, 2021 at 02:06 PM
-- Server version: 10.4.17-MariaDB
-- PHP Version: 7.4.13

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `tst`
--

-- --------------------------------------------------------

--
-- Table structure for table `admincount`
--

CREATE TABLE `admincount` (
  `id` int(100) NOT NULL,
  `UsersCount` int(4) NOT NULL DEFAULT 0,
  `UnDom` int(10) NOT NULL DEFAULT 0,
  `UnISP` int(4) NOT NULL DEFAULT 0,
  `TotEntries` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `admincount`
--

INSERT INTO `admincount` (`id`, `UsersCount`, `UnDom`, `UnISP`, `TotEntries`) VALUES
(1, 1, 5, 1, 15);

-- --------------------------------------------------------

--
-- Table structure for table `contenttypecount`
--

CREATE TABLE `contenttypecount` (
  `word` varchar(100) NOT NULL,
  `wordCount` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `contenttypecount`
--

INSERT INTO `contenttypecount` (`word`, `wordCount`) VALUES
('application/javascript', 6),
('application/json', 1),
('image/png', 4),
('notDefined', 1),
('text/html', 3);

-- --------------------------------------------------------

--
-- Table structure for table `files`
--

CREATE TABLE `files` (
  `id` int(11) NOT NULL,
  `startedDateTime` varchar(100) NOT NULL,
  `timings` int(6) NOT NULL,
  `reqMethod` varchar(8) NOT NULL,
  `url` varchar(100) NOT NULL,
  `resStatus` int(3) NOT NULL,
  `resStatusText` varchar(100) NOT NULL,
  `uid` varchar(100) NOT NULL,
  `serverIpAddress` varchar(20) NOT NULL,
  `resHeader` longtext NOT NULL,
  `reqHeader` longtext NOT NULL,
  `ISP` varchar(40) NOT NULL,
  `age` int(100) NOT NULL,
  `contentType` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `files`
--

INSERT INTO `files` (`id`, `startedDateTime`, `timings`, `reqMethod`, `url`, `resStatus`, `resStatusText`, `uid`, `serverIpAddress`, `resHeader`, `reqHeader`, `ISP`, `age`, `contentType`) VALUES
(1, '2020-11-23T18:52:29.829+02:00', 31, 'GET', 'developer.mozilla.org', 304, 'Not Modified', '2', '52.85.158.99', '{\"cache\":{\"private\":0,\"public\":1,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"expires\":\"notDefined\",\"lastModified\":\"notDefined\",\"age\":\"243\",\"contentType\":\"text/html\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"contentType\":\"notDefined\",\"host\":\"developer.mozilla.org\"}', 'provider5', 243, 'text/html'),
(2, '2020-11-23T18:52:30.831+02:00', 78, 'GET', 'cdn.speedcurve.com', 304, 'Not Modified', '2', '151.101.194.217', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":604800},\"expires\":\"Mon, 30 Nov 2020 15:35:51 GMT\",\"lastModified\":\"notDefined\",\"age\":\"4599\",\"contentType\":\"application/javascript\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"contentType\":\"notDefined\",\"host\":\"cdn.speedcurve.com\"}', 'provider5', 4599, 'application/javascript'),
(3, '2020-11-23T18:52:30.838+02:00', 0, 'GET', 'www.google-analytics.com', 0, '', '2', '', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"expires\":\"notDefined\",\"lastModified\":\"notDefined\",\"age\":-1,\"contentType\":\"notDefined\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"contentType\":\"notDefined\",\"host\":\"www.google-analytics.com\"}', 'provider5', -1, 'notDefined'),
(4, '2020-11-23T18:52:30.850+02:00', 0, 'GET', 'developer.mozilla.org', 200, 'OK', '2', '', '{\"cache\":{\"private\":0,\"public\":1,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":315360000},\"expires\":\"notDefined\",\"lastModified\":\"Mon, 21 Sep 2020 22:15:31 GMT\",\"age\":\"5415372\",\"contentType\":\"application/javascript\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"contentType\":\"notDefined\",\"host\":\"developer.mozilla.org\"}', 'provider5', 5415372, 'application/javascript'),
(5, '2020-11-23T18:52:30.857+02:00', 0, 'GET', 'developer.mozilla.org', 200, 'OK', '2', '', '{\"cache\":{\"private\":0,\"public\":1,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":315360000},\"expires\":\"notDefined\",\"lastModified\":\"Mon, 12 Oct 2020 14:52:01 GMT\",\"age\":\"3635410\",\"contentType\":\"application/javascript\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"contentType\":\"notDefined\",\"host\":\"developer.mozilla.org\"}', 'provider5', 3635410, 'application/javascript'),
(6, '2020-11-23T18:52:30.868+02:00', 0, 'GET', 'developer.mozilla.org', 200, 'OK', '2', '', '{\"cache\":{\"private\":0,\"public\":1,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":315360000},\"expires\":\"notDefined\",\"lastModified\":\"Thu, 20 Aug 2020 23:25:42 GMT\",\"age\":\"7148055\",\"contentType\":\"application/javascript\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"contentType\":\"notDefined\",\"host\":\"developer.mozilla.org\"}', 'provider5', 7148055, 'application/javascript'),
(7, '2020-11-23T18:52:30.874+02:00', 0, 'GET', 'developer.mozilla.org', 200, 'OK', '2', '', '{\"cache\":{\"private\":0,\"public\":1,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":315360000},\"expires\":\"notDefined\",\"lastModified\":\"Wed, 10 Jun 2020 16:44:37 GMT\",\"age\":\"14320682\",\"contentType\":\"application/javascript\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"contentType\":\"notDefined\",\"host\":\"developer.mozilla.org\"}', 'provider5', 14320682, 'application/javascript'),
(8, '2020-11-23T18:52:30.878+02:00', 47, 'GET', 'mdn.mozillademos.org', 302, 'Found', '2', '52.85.158.43', '{\"cache\":{\"private\":0,\"public\":1,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":900},\"expires\":\"notDefined\",\"lastModified\":\"Wed, 06 May 2020 22:31:49 GMT\",\"age\":\"243\",\"contentType\":\"text/html\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"contentType\":\"notDefined\",\"host\":\"mdn.mozillademos.org\"}', 'provider5', 243, 'text/html'),
(9, '2020-11-23T18:52:30.882+02:00', 0, 'GET', 'developer.mozilla.org', 200, 'OK', '2', '', '{\"cache\":{\"private\":0,\"public\":1,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":315360000},\"expires\":\"notDefined\",\"lastModified\":\"Thu, 20 Aug 2020 23:25:42 GMT\",\"age\":\"7148231\",\"contentType\":\"application/javascript\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"contentType\":\"notDefined\",\"host\":\"developer.mozilla.org\"}', 'provider5', 7148231, 'application/javascript'),
(10, '2020-11-23T18:52:31.279+02:00', 664, 'GET', 'developer.mozilla.org', 200, 'OK', '2', '52.85.158.99', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":1,\"noStore\":1,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"expires\":\"Mon, 23 Nov 2020 16:52:31 GMT\",\"lastModified\":\"notDefined\",\"age\":-1,\"contentType\":\"application/json\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"contentType\":\"notDefined\",\"host\":\"developer.mozilla.org\"}', 'provider5', -1, 'application/json'),
(11, '2020-11-23T18:52:31.347+02:00', 84, 'GET', 'mdn.mozillademos.org', 302, 'Found', '2', '52.85.158.43', '{\"cache\":{\"private\":0,\"public\":1,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":900},\"expires\":\"notDefined\",\"lastModified\":\"Fri, 12 Oct 2018 18:16:27 GMT\",\"age\":\"244\",\"contentType\":\"text/html\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"contentType\":\"notDefined\",\"host\":\"mdn.mozillademos.org\"}', 'provider5', 244, 'text/html'),
(12, '2020-11-23T18:52:31.363+02:00', 0, 'GET', 'media.prod.mdn.mozit.cloud', 0, '', '2', '', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"expires\":\"notDefined\",\"lastModified\":\"notDefined\",\"age\":-1,\"contentType\":\"image/png\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"contentType\":\"notDefined\",\"host\":\"media.prod.mdn.mozit.cloud\"}', 'provider5', -1, 'image/png'),
(13, '2020-11-23T18:52:32.017+02:00', 0, 'GET', 'media.prod.mdn.mozit.cloud', 0, '', '2', '', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"expires\":\"notDefined\",\"lastModified\":\"notDefined\",\"age\":-1,\"contentType\":\"image/png\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"contentType\":\"notDefined\",\"host\":\"media.prod.mdn.mozit.cloud\"}', 'provider5', -1, 'image/png'),
(14, '2020-11-23T18:52:32.098+02:00', 0, 'GET', 'developer.mozilla.org', 0, '', '2', '', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"expires\":\"notDefined\",\"lastModified\":\"notDefined\",\"age\":-1,\"contentType\":\"image/png\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"contentType\":\"notDefined\",\"host\":\"developer.mozilla.org\"}', 'provider5', -1, 'image/png'),
(15, '2020-11-23T18:52:32.098+02:00', 0, 'GET', 'developer.mozilla.org', 0, '', '2', '', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":\"notDefined\"},\"expires\":\"notDefined\",\"lastModified\":\"notDefined\",\"age\":-1,\"contentType\":\"image/png\"}', '{\"cache\":{\"private\":0,\"public\":0,\"noCache\":0,\"noStore\":0,\"maxStale\":0,\"minFresh\":0,\"maxAge\":0},\"contentType\":\"notDefined\",\"host\":\"developer.mozilla.org\"}', 'provider5', -1, 'image/png');

--
-- Triggers `files`
--
DELIMITER $$
CREATE TRIGGER `counting` BEFORE INSERT ON `files` FOR EACH ROW BEGIN
#domain counting
SET @ud=(SELECT UnDom FROM admincount);
SET @id=(SELECT id FROM files WHERE url=NEW.url limit 1);
SET @aid='';
UPDATE admincount SET UnDom=@ud+1 WHERE ISNULL(@aid=@id);
# ISP counting
SET @ud=(SELECT UnISP FROM admincount);
SET @id=(SELECT id FROM files WHERE ISP=NEW.ISP limit 1);
SET @aid='';
UPDATE admincount SET UnISP=@ud+1 WHERE ISNULL(@aid=@id);
# Request Content-type counter
SET @a=json_extract(NEW.`reqHeader`,'$.contentType');
INSERT INTO reqconttype(word,wordCount) value (@a,1) ON DUPLICATE KEY UPDATE wordCount=wordCount+1;
#Method Counter
INSERT INTO methodcount(word,wordCount) value (NEW.reqMethod,1) ON DUPLICATE KEY UPDATE wordCount=wordCount+1;
#Response Content-type Counter
INSERT INTO contenttypecount(word,wordCount) value (NEW.contentType,1) ON DUPLICATE KEY UPDATE wordCount=wordCount+1;
#Status Counter
INSERT INTO statuscount(word,wordCount) value (NEW.resStatus,1) ON DUPLICATE KEY UPDATE wordCount=wordCount+1;


END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `methodcount`
--

CREATE TABLE `methodcount` (
  `word` varchar(10) NOT NULL,
  `wordCount` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `methodcount`
--

INSERT INTO `methodcount` (`word`, `wordCount`) VALUES
('GET', 15);

-- --------------------------------------------------------

--
-- Table structure for table `panos`
--

CREATE TABLE `panos` (
  `latitude` varchar(10) NOT NULL,
  `longitude` varchar(10) NOT NULL,
  `entriesCounter` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `panos`
--

INSERT INTO `panos` (`latitude`, `longitude`, `entriesCounter`) VALUES
('37.09024', '-95.712891', 5);

-- --------------------------------------------------------

--
-- Table structure for table `reqconttype`
--

CREATE TABLE `reqconttype` (
  `word` varchar(100) NOT NULL,
  `wordCount` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `reqconttype`
--

INSERT INTO `reqconttype` (`word`, `wordCount`) VALUES
('\"notDefined\"', 15);

-- --------------------------------------------------------

--
-- Table structure for table `serverloc`
--

CREATE TABLE `serverloc` (
  `latitude` varchar(10) NOT NULL,
  `longitude` varchar(10) NOT NULL,
  `cnter` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `serverloc`
--

INSERT INTO `serverloc` (`latitude`, `longitude`, `cnter`) VALUES
('37.09024', '-95.712891', 5);

-- --------------------------------------------------------

--
-- Table structure for table `serveruserloc`
--

CREATE TABLE `serveruserloc` (
  `longitude` varchar(10) NOT NULL,
  `latitude` varchar(10) NOT NULL,
  `Ulongitude` varchar(10) NOT NULL,
  `Ulatitude` varchar(10) NOT NULL,
  `cnter` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `serveruserloc`
--

INSERT INTO `serveruserloc` (`longitude`, `latitude`, `Ulongitude`, `Ulatitude`, `cnter`) VALUES
('-95.712891', '37.09024', '13.23', '11.2345', 5);

-- --------------------------------------------------------

--
-- Table structure for table `statuscount`
--

CREATE TABLE `statuscount` (
  `word` int(3) NOT NULL,
  `wordCount` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `statuscount`
--

INSERT INTO `statuscount` (`word`, `wordCount`) VALUES
(0, 5),
(200, 6),
(302, 2),
(304, 2);

-- --------------------------------------------------------

--
-- Table structure for table `tstins`
--

CREATE TABLE `tstins` (
  `id` int(10) NOT NULL,
  `val1` varchar(10) NOT NULL,
  `val2` varchar(10) NOT NULL,
  `cnt` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `tstins`
--

INSERT INTO `tstins` (`id`, `val1`, `val2`, `cnt`) VALUES
(1, 'shit', 'is', 0),
(2, 'serious', 'fuck', 1),
(3, 'me', 'up', 0),
(4, 'shit', 'is', 1),
(5, 'serious', 'fuck', 2),
(6, 'me', 'up', 3),
(7, 'shit', 'is', 1),
(8, 'serious', 'fuck', 2),
(9, 'me', 'up', 3);

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `id` int(255) NOT NULL,
  `username` varchar(20) NOT NULL,
  `password` varchar(100) NOT NULL,
  `email` varchar(255) NOT NULL,
  `type` tinyint(1) DEFAULT NULL,
  `counterEntries` int(20) NOT NULL,
  `stamptime` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id`, `username`, `password`, `email`, `type`, `counterEntries`, `stamptime`) VALUES
(2, 'Panos', '59d82244e7f4018e4928666d7188c0d5', 'p@g.com', 0, 15, '2021/01/29 - 11:44:17');

--
-- Triggers `user`
--
DELIMITER $$
CREATE TRIGGER `countUser` AFTER INSERT ON `user` FOR EACH ROW BEGIN

SET @uc=(SELECT UsersCount FROM admincount);
SET @uc=@uc+1;
UPDATE admincount SET UsersCount=@uc ;

END
$$
DELIMITER ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admincount`
--
ALTER TABLE `admincount`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `contenttypecount`
--
ALTER TABLE `contenttypecount`
  ADD PRIMARY KEY (`word`);

--
-- Indexes for table `files`
--
ALTER TABLE `files`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `methodcount`
--
ALTER TABLE `methodcount`
  ADD PRIMARY KEY (`word`);

--
-- Indexes for table `panos`
--
ALTER TABLE `panos`
  ADD PRIMARY KEY (`latitude`,`longitude`);

--
-- Indexes for table `reqconttype`
--
ALTER TABLE `reqconttype`
  ADD PRIMARY KEY (`word`);

--
-- Indexes for table `serverloc`
--
ALTER TABLE `serverloc`
  ADD PRIMARY KEY (`latitude`,`longitude`);

--
-- Indexes for table `serveruserloc`
--
ALTER TABLE `serveruserloc`
  ADD PRIMARY KEY (`longitude`,`latitude`,`Ulongitude`,`Ulatitude`);

--
-- Indexes for table `statuscount`
--
ALTER TABLE `statuscount`
  ADD PRIMARY KEY (`word`);

--
-- Indexes for table `tstins`
--
ALTER TABLE `tstins`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `admincount`
--
ALTER TABLE `admincount`
  MODIFY `id` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `files`
--
ALTER TABLE `files`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=16;

--
-- AUTO_INCREMENT for table `tstins`
--
ALTER TABLE `tstins`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `id` int(255) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
