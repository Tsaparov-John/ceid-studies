-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 24, 2021 at 09:15 PM
-- Server version: 10.4.17-MariaDB
-- PHP Version: 8.0.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `test`
--

-- --------------------------------------------------------

--
-- Table structure for table `aatpinakas1`
--

CREATE TABLE `aatpinakas1` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `aatpinakas1`
--

INSERT INTO `aatpinakas1` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '34899.0', '104023.0'),
(2, '2003-02', '36873.0', '120426.0'),
(3, '2003-03', '36784.0', '171453.0'),
(4, '2003-04', '36151.0', '421416.0'),
(5, '2003-05', '111693.0', '822869.0'),
(6, '2003-06', '202965.0', '955931.0'),
(7, '2003-07', '263643.0', '1121812.0'),
(8, '2003-08', '294998.0', '1230377.0'),
(9, '2003-09', '224735.0', '996237.0'),
(10, '2003-10', '81538.0', '568745.0'),
(11, '2003-11', '38086.0', '141016.0'),
(12, '2003-12', '35620.0', '113671.0'),
(13, '2004-01', '0', '89982.0'),
(14, '2004-02', '0', '108722.0'),
(15, '2004-03', '0', '176008.0'),
(16, '2004-04', '0', '419535.0'),
(17, '2004-05', '0', '828176.0'),
(18, '2004-06', '0', '909887.0'),
(19, '2004-07', '0', '1054027.0'),
(20, '2004-08', '0', '1097630.0'),
(21, '2004-09', '0', '981075.0'),
(22, '2004-10', '0', '549990.0'),
(23, '2004-11', '0', '146035.0'),
(24, '2004-12', '0', '99995.0'),
(25, '2005-01', '58352.0', '96964.0'),
(26, '2005-02', '54300.0', '118908.0'),
(27, '2005-03', '62016.0', '221743.0'),
(28, '2005-04', '64447.0', '386885.0'),
(29, '2005-05', '163935.0', '919083.0'),
(30, '2005-06', '299352.0', '1060025.0'),
(31, '2005-07', '369934.0', '1265202.0'),
(32, '2005-08', '386426.0', '1332103.0'),
(33, '2005-09', '280599.0', '1127930.0'),
(34, '2005-10', '101849.0', '591676.0'),
(35, '2005-11', '43304.0', '139454.0'),
(36, '2005-12', '51138.0', '88733.0'),
(37, '2006-01', '64149.0', '98284.0'),
(38, '2006-02', '61968.0', '111079.0'),
(39, '2006-03', '66216.0', '198938.0'),
(40, '2006-04', '71428.0', '443973.0'),
(41, '2006-05', '166898.0', '926680.0'),
(42, '2006-06', '310588.0', '1116195.0'),
(43, '2006-07', '399076.0', '1337607.0'),
(44, '2006-08', '404746.0', '1375199.0'),
(45, '2006-09', '272796.0', '1204741.0'),
(46, '2006-10', '103338.0', '659134.0'),
(47, '2006-11', '58097.0', '165835.0'),
(48, '2006-12', '70913.0', '110543.0');

-- --------------------------------------------------------

--
-- Table structure for table `aatpinakas5`
--

CREATE TABLE `aatpinakas5` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `aatpinakas5`
--

INSERT INTO `aatpinakas5` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '30.8', '17.8'),
(2, '2003-02', '19.0', '10.7'),
(3, '2003-03', '20.3', '-16.7'),
(4, '2003-04', '11.0', '3.9'),
(5, '2003-05', '19.4', '-3.1'),
(6, '2003-06', '38.7', '-1.6'),
(7, '2003-07', '33.3', '-0.9'),
(8, '2003-08', '43.2', '3.6'),
(9, '2003-09', '39.9', '-6.4'),
(10, '2003-10', '29.2', '-0.5'),
(11, '2003-11', '37.6', '-4.2'),
(12, '2003-12', '16.9', '-1.5'),
(13, '2004-01', '0', '-13.4'),
(14, '2004-02', '0', '-9.9'),
(15, '2004-03', '0', '3.3'),
(16, '2004-04', '0', '-0.7'),
(17, '2004-05', '0', '0.5'),
(18, '2004-06', '0', '-4.4'),
(19, '2004-07', '0', '-4.9'),
(20, '2004-08', '0', '-9.2'),
(21, '2004-09', '0', '-1.5'),
(22, '2004-10', '0', '-3.3'),
(23, '2004-11', '0', '3.5'),
(24, '2004-12', '0', '-11.9'),
(25, '2005-01', '0', '7.95'),
(26, '2005-02', '0', '9.6'),
(27, '2005-03', '0', '25.93'),
(28, '2005-04', '0', '-7.82'),
(29, '2005-05', '0', '10.79'),
(30, '2005-06', '0', '16.36'),
(31, '2005-07', '0', '18.75'),
(32, '2005-08', '0', '19.33'),
(33, '2005-09', '0', '15.25'),
(34, '2005-10', '0', '7.84'),
(35, '2005-11', '0', '-4.48'),
(36, '2005-12', '0', '-11.19'),
(37, '2006-01', '9.25', '1.45'),
(38, '2006-02', '12.62', '-6.56'),
(39, '2006-03', '6.64', '-10.11'),
(40, '2006-04', '10.51', '15.06'),
(41, '2006-05', '1.63', '1.16'),
(42, '2006-06', '3.61', '5.2'),
(43, '2006-07', '8.03', '6.16'),
(44, '2006-08', '4.99', '3.59'),
(45, '2006-09', '-2.73', '6.85'),
(46, '2006-10', '1.58', '11.6'),
(47, '2006-11', '34.83', '18.94'),
(48, '2006-12', '39.9', '24.62');

-- --------------------------------------------------------

--
-- Table structure for table `aatpinakas9`
--

CREATE TABLE `aatpinakas9` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `aatpinakas9`
--

INSERT INTO `aatpinakas9` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '4354.0', '1368.0'),
(2, '2003-02', '4731.0', '1185.0'),
(3, '2003-03', '5942.0', '2463.0'),
(4, '2003-04', '7105.0', '381.0'),
(5, '2003-05', '11600.0', '1243.0'),
(6, '2003-06', '16921.0', '12335.0'),
(7, '2003-07', '22402.0', '23558.0'),
(8, '2003-08', '31676.0', '34477.0'),
(9, '2003-09', '11905.0', '2280.0'),
(10, '2003-10', '8755.0', '528.0'),
(11, '2003-11', '7435.0', '1877.0'),
(12, '2003-12', '11143.0', '626.0'),
(13, '2004-01', '0', '64.0'),
(14, '2004-02', '0', '150.0'),
(15, '2004-03', '0', '145.0'),
(16, '2004-04', '0', '561.0'),
(17, '2004-05', '0', '2128.0'),
(18, '2004-06', '0', '14052.0'),
(19, '2004-07', '0', '36920.0'),
(20, '2004-08', '0', '38820.0'),
(21, '2004-09', '0', '5380.0'),
(22, '2004-10', '0', '1945.0'),
(23, '2004-11', '0', '1412.0'),
(24, '2004-12', '0', '1837.0'),
(25, '2005-01', '8259.0', '1854.0'),
(26, '2005-02', '6479.0', '423.0'),
(27, '2005-03', '8274.0', '1202.0'),
(28, '2005-04', '9512.0', '1037.0'),
(29, '2005-05', '13304.0', '1884.0'),
(30, '2005-06', '14434.0', '19401.0'),
(31, '2005-07', '29023.0', '49213.0'),
(32, '2005-08', '35870.0', '51615.0'),
(33, '2005-09', '16365.0', '3341.0'),
(34, '2005-10', '10037.0', '938.0'),
(35, '2005-11', '9349.0', '53.0'),
(36, '2005-12', '12304.0', '18.0'),
(37, '2006-01', '12535.0', '7.0'),
(38, '2006-02', '12380.0', '15.0'),
(39, '2006-03', '13060.0', '21.0'),
(40, '2006-04', '15432.0', '276.0'),
(41, '2006-05', '16126.0', '1476.0'),
(42, '2006-06', '23275.0', '10955.0'),
(43, '2006-07', '53142.0', '39099.0'),
(44, '2006-08', '62161.0', '49960.0'),
(45, '2006-09', '25275.0', '3346.0'),
(46, '2006-10', '15262.0', '270.0'),
(47, '2006-11', '14442.0', '290.0'),
(48, '2006-12', '19010.0', '525.0');

-- --------------------------------------------------------

--
-- Table structure for table `aonpinakas1`
--

CREATE TABLE `aonpinakas1` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `aonpinakas1`
--

INSERT INTO `aonpinakas1` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '0', '0'),
(2, '2003-02', '0', '0'),
(3, '2003-03', '0', '0'),
(4, '2003-04', '0', '0'),
(5, '2003-05', '0', '0'),
(6, '2003-06', '0', '0'),
(7, '2003-07', '0', '0'),
(8, '2003-08', '0', '0'),
(9, '2003-09', '0', '0'),
(10, '2003-10', '0', '0'),
(11, '2003-11', '0', '0'),
(12, '2003-12', '0', '0'),
(13, '2004-01', '0', '0'),
(14, '2004-02', '0', '0'),
(15, '2004-03', '0', '0'),
(16, '2004-04', '0', '0'),
(17, '2004-05', '0', '0'),
(18, '2004-06', '0', '0'),
(19, '2004-07', '0', '0'),
(20, '2004-08', '0', '0'),
(21, '2004-09', '0', '0'),
(22, '2004-10', '0', '0'),
(23, '2004-11', '0', '0'),
(24, '2004-12', '0', '0'),
(25, '2005-01', '36798.0', '48428.0'),
(26, '2005-02', '36044.0', '72816.0'),
(27, '2005-03', '41367.0', '130308.0'),
(28, '2005-04', '37713.0', '265276.0'),
(29, '2005-05', '125188.0', '700301.0'),
(30, '2005-06', '224826.0', '782741.0'),
(31, '2005-07', '276187.0', '959999.0'),
(32, '2005-08', '288316.0', '1069410.0'),
(33, '2005-09', '216211.0', '828577.0'),
(34, '2005-10', '66227.0', '406490.0'),
(35, '2005-11', '26233.0', '65426.0'),
(36, '2005-12', '33227.0', '43063.0'),
(37, '2006-01', '41318.0', '45076.0'),
(38, '2006-02', '43897.0', '62382.0'),
(39, '2006-03', '44695.0', '106980.0'),
(40, '2006-04', '39082.0', '289141.0'),
(41, '2006-05', '121481.0', '667565.0'),
(42, '2006-06', '218152.0', '801025.0'),
(43, '2006-07', '280900.0', '988388.0'),
(44, '2006-08', '290050.0', '1071018.0'),
(45, '2006-09', '199566.0', '854695.0'),
(46, '2006-10', '62747.0', '422272.0'),
(47, '2006-11', '34374.0', '76917.0'),
(48, '2006-12', '42906.0', '48844.0');

-- --------------------------------------------------------

--
-- Table structure for table `aonpinakas5`
--

CREATE TABLE `aonpinakas5` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `aonpinakas5`
--

INSERT INTO `aonpinakas5` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '0', '0'),
(2, '2003-02', '0', '0'),
(3, '2003-03', '0', '0'),
(4, '2003-04', '0', '0'),
(5, '2003-05', '0', '0'),
(6, '2003-06', '0', '0'),
(7, '2003-07', '0', '0'),
(8, '2003-08', '0', '0'),
(9, '2003-09', '0', '0'),
(10, '2003-10', '0', '0'),
(11, '2003-11', '0', '0'),
(12, '2003-12', '0', '0'),
(13, '2004-01', '0', '0'),
(14, '2004-02', '0', '0'),
(15, '2004-03', '0', '0'),
(16, '2004-04', '0', '0'),
(17, '2004-05', '0', '0'),
(18, '2004-06', '0', '0'),
(19, '2004-07', '0', '0'),
(20, '2004-08', '0', '0'),
(21, '2004-09', '0', '0'),
(22, '2004-10', '0', '0'),
(23, '2004-11', '0', '0'),
(24, '2004-12', '0', '0'),
(25, '2005-01', '36458.0', '48309.0'),
(26, '2005-02', '35730.0', '72776.0'),
(27, '2005-03', '40851.0', '129906.0'),
(28, '2005-04', '37434.0', '261598.0'),
(29, '2005-05', '124678.0', '683227.0'),
(30, '2005-06', '222789.0', '762654.0'),
(31, '2005-07', '271547.0', '906165.0'),
(32, '2005-08', '282669.0', '996881.0'),
(33, '2005-09', '214352.0', '811715.0'),
(34, '2005-10', '65781.0', '403869.0'),
(35, '2005-11', '25837.0', '65269.0'),
(36, '2005-12', '32206.0', '42913.0'),
(37, '2006-01', '40580.0', '44957.0'),
(38, '2006-02', '42702.0', '62357.0'),
(39, '2006-03', '44002.0', '106905.0'),
(40, '2006-04', '38725.0', '285746.0'),
(41, '2006-05', '120697.0', '652801.0'),
(42, '2006-06', '216343.0', '778355.0'),
(43, '2006-07', '276901.0', '936227.0'),
(44, '2006-08', '285551.0', '1000278.0'),
(45, '2006-09', '197896.0', '837323.0'),
(46, '2006-10', '62427.0', '420186.0'),
(47, '2006-11', '34153.0', '76788.0'),
(48, '2006-12', '42119.0', '48716.0');

-- --------------------------------------------------------

--
-- Table structure for table `aonpinakas9`
--

CREATE TABLE `aonpinakas9` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `aonpinakas9`
--

INSERT INTO `aonpinakas9` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '0', '0'),
(2, '2003-02', '0', '0'),
(3, '2003-03', '0', '0'),
(4, '2003-04', '0', '0'),
(5, '2003-05', '0', '0'),
(6, '2003-06', '0', '0'),
(7, '2003-07', '0', '0'),
(8, '2003-08', '0', '0'),
(9, '2003-09', '0', '0'),
(10, '2003-10', '0', '0'),
(11, '2003-11', '0', '0'),
(12, '2003-12', '0', '0'),
(13, '2004-01', '0', '0'),
(14, '2004-02', '0', '0'),
(15, '2004-03', '0', '0'),
(16, '2004-04', '0', '0'),
(17, '2004-05', '0', '0'),
(18, '2004-06', '0', '0'),
(19, '2004-07', '0', '0'),
(20, '2004-08', '0', '0'),
(21, '2004-09', '0', '0'),
(22, '2004-10', '0', '0'),
(23, '2004-11', '0', '0'),
(24, '2004-12', '0', '0'),
(25, '2005-01', '340.0', '119.0'),
(26, '2005-02', '314.0', '40.0'),
(27, '2005-03', '516.0', '402.0'),
(28, '2005-04', '279.0', '3678.0'),
(29, '2005-05', '510.0', '17074.0'),
(30, '2005-06', '2037.0', '20087.0'),
(31, '2005-07', '4640.0', '53834.0'),
(32, '2005-08', '5647.0', '72529.0'),
(33, '2005-09', '1859.0', '16862.0'),
(34, '2005-10', '446.0', '2621.0'),
(35, '2005-11', '396.0', '157.0'),
(36, '2005-12', '1021.0', '150.0'),
(37, '2006-01', '738.0', '119.0'),
(38, '2006-02', '1195.0', '25.0'),
(39, '2006-03', '693.0', '75.0'),
(40, '2006-04', '357.0', '3395.0'),
(41, '2006-05', '784.0', '14764.0'),
(42, '2006-06', '1809.0', '22670.0'),
(43, '2006-07', '3999.0', '52161.0'),
(44, '2006-08', '4499.0', '70740.0'),
(45, '2006-09', '1670.0', '17372.0'),
(46, '2006-10', '320.0', '2086.0'),
(47, '2006-11', '221.0', '129.0'),
(48, '2006-12', '787.0', '128.0');

-- --------------------------------------------------------

--
-- Table structure for table `nsapinakas1`
--

CREATE TABLE `nsapinakas1` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `nsapinakas1`
--

INSERT INTO `nsapinakas1` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '142078.0', '259723.0'),
(2, '2003-02', '145373.0', '312923.0'),
(3, '2003-03', '114246.0', '436473.0'),
(4, '2003-04', '111491.0', '1530599.0'),
(5, '2003-05', '575226.0', '4456218.0'),
(6, '2003-06', '1427591.0', '6305958.0'),
(7, '2003-07', '2036011.0', '7953402.0'),
(8, '2003-08', '2383548.0', '8381886.0'),
(9, '2003-09', '1676542.0', '6393491.0'),
(10, '2003-10', '332490.0', '3555926.0'),
(11, '2003-11', '99256.0', '391575.0'),
(12, '2003-12', '98318.0', '429289.0'),
(13, '2004-01', '0', '222409.0'),
(14, '2004-02', '0', '278915.0'),
(15, '2004-03', '0', '431036.0'),
(16, '2004-04', '0', '1451875.0'),
(17, '2004-05', '0', '4392827.0'),
(18, '2004-06', '0', '5979185.0'),
(19, '2004-07', '0', '7439747.0'),
(20, '2004-08', '0', '8313470.0'),
(21, '2004-09', '0', '6438611.0'),
(22, '2004-10', '0', '3134706.0'),
(23, '2004-11', '0', '389286.0'),
(24, '2004-12', '0', '324129.0'),
(25, '2005-01', '208947.0', '237307.0'),
(26, '2005-02', '183511.0', '297704.0'),
(27, '2005-03', '185204.0', '535348.0'),
(28, '2005-04', '164201.0', '1090366.0'),
(29, '2005-05', '785819.0', '4593278.0'),
(30, '2005-06', '1965307.0', '6372737.0'),
(31, '2005-07', '2757788.0', '8060735.0'),
(32, '2005-08', '2839239.0', '8898653.0'),
(33, '2005-09', '1935440.0', '6857731.0'),
(34, '2005-10', '370452.0', '3235578.0'),
(35, '2005-11', '100573.0', '343843.0'),
(36, '2005-12', '127570.0', '211074.0'),
(37, '2006-01', '246388.0', '233284.0'),
(38, '2006-02', '219935.0', '276858.0'),
(39, '2006-03', '206652.0', '454680.0'),
(40, '2006-04', '192563.0', '1338860.0'),
(41, '2006-05', '766463.0', '4705179.0'),
(42, '2006-06', '1980745.0', '6852393.0'),
(43, '2006-07', '2947991.0', '8745618.0'),
(44, '2006-08', '2934857.0', '9074920.0'),
(45, '2006-09', '1811048.0', '7248551.0'),
(46, '2006-10', '332886.0', '3467946.0'),
(47, '2006-11', '127451.0', '398990.0'),
(48, '2006-12', '177731.0', '258102.0');

-- --------------------------------------------------------

--
-- Table structure for table `nsapinakas2`
--

CREATE TABLE `nsapinakas2` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `nsapinakas2`
--

INSERT INTO `nsapinakas2` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '141854.0', '259089.0'),
(2, '2003-02', '145205.0', '312830.0'),
(3, '2003-03', '114066.0', '426824.0'),
(4, '2003-04', '111230.0', '1523413.0'),
(5, '2003-05', '571346.0', '4420220.0'),
(6, '2003-06', '1404927.0', '6234480.0'),
(7, '2003-07', '1992284.0', '7767096.0'),
(8, '2003-08', '2322341.0', '8127029.0'),
(9, '2003-09', '1655070.0', '6327795.0'),
(10, '2003-10', '331530.0', '3543333.0'),
(11, '2003-11', '98644.0', '391035.0'),
(12, '2003-12', '98036.0', '426413.0'),
(13, '2004-01', '0', '221794.0'),
(14, '2004-02', '0', '278058.0'),
(15, '2004-03', '0', '430009.0'),
(16, '2004-04', '0', '1441955.0'),
(17, '2004-05', '0', '4353123.0'),
(18, '2004-06', '0', '5921952.0'),
(19, '2004-07', '0', '7302459.0'),
(20, '2004-08', '0', '8143639.0'),
(21, '2004-09', '0', '6381140.0'),
(22, '2004-10', '0', '3123465.0'),
(23, '2004-11', '0', '388693.0'),
(24, '2004-12', '0', '323496.0'),
(25, '2005-01', '207932.0', '236836.0'),
(26, '2005-02', '182431.0', '297455.0'),
(27, '2005-03', '183404.0', '534027.0'),
(28, '2005-04', '163228.0', '1082042.0'),
(29, '2005-05', '781778.0', '4544810.0'),
(30, '2005-06', '1942087.0', '6300651.0'),
(31, '2005-07', '2707119.0', '7856871.0'),
(32, '2005-08', '2789286.0', '8647196.0'),
(33, '2005-09', '1921566.0', '6798457.0'),
(34, '2005-10', '369151.0', '3222669.0'),
(35, '2005-11', '99479.0', '343284.0'),
(36, '2005-12', '123621.0', '210500.0'),
(37, '2006-01', '240495.0', '232971.0'),
(38, '2006-02', '213738.0', '276560.0'),
(39, '2006-03', '203360.0', '454284.0'),
(40, '2006-04', '191323.0', '1330722.0'),
(41, '2006-05', '759923.0', '4663413.0'),
(42, '2006-06', '1954620.0', '6777815.0'),
(43, '2006-07', '2899401.0', '8564397.0'),
(44, '2006-08', '2885407.0', '8850015.0'),
(45, '2006-09', '1797028.0', '7192048.0'),
(46, '2006-10', '330880.0', '3460392.0'),
(47, '2006-11', '126306.0', '398475.0'),
(48, '2006-12', '173581.0', '257675.0');

-- --------------------------------------------------------

--
-- Table structure for table `nsapinakas3`
--

CREATE TABLE `nsapinakas3` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `nsapinakas3`
--

INSERT INTO `nsapinakas3` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '224.0', '634.0'),
(2, '2003-02', '168.0', '93.0'),
(3, '2003-03', '180.0', '9649.0'),
(4, '2003-04', '261.0', '7186.0'),
(5, '2003-05', '3880.0', '35998.0'),
(6, '2003-06', '22664.0', '71478.0'),
(7, '2003-07', '43727.0', '186306.0'),
(8, '2003-08', '61207.0', '254857.0'),
(9, '2003-09', '21472.0', '65696.0'),
(10, '2003-10', '960.0', '12593.0'),
(11, '2003-11', '612.0', '540.0'),
(12, '2003-12', '282.0', '2876.0'),
(13, '2004-01', '0', '615.0'),
(14, '2004-02', '0', '857.0'),
(15, '2004-03', '0', '1027.0'),
(16, '2004-04', '0', '9920.0'),
(17, '2004-05', '0', '39704.0'),
(18, '2004-06', '0', '57233.0'),
(19, '2004-07', '0', '137288.0'),
(20, '2004-08', '0', '169831.0'),
(21, '2004-09', '0', '57471.0'),
(22, '2004-10', '0', '11241.0'),
(23, '2004-11', '0', '593.0'),
(24, '2004-12', '0', '633.0'),
(25, '2005-01', '1015.0', '471.0'),
(26, '2005-02', '1080.0', '249.0'),
(27, '2005-03', '1800.0', '1321.0'),
(28, '2005-04', '973.0', '8324.0'),
(29, '2005-05', '4041.0', '48468.0'),
(30, '2005-06', '23220.0', '72086.0'),
(31, '2005-07', '50669.0', '203864.0'),
(32, '2005-08', '49953.0', '251457.0'),
(33, '2005-09', '13874.0', '59274.0'),
(34, '2005-10', '1301.0', '12909.0'),
(35, '2005-11', '1094.0', '559.0'),
(36, '2005-12', '3949.0', '574.0'),
(37, '2006-01', '5893.0', '313.0'),
(38, '2006-02', '6197.0', '298.0'),
(39, '2006-03', '3292.0', '396.0'),
(40, '2006-04', '1240.0', '8138.0'),
(41, '2006-05', '6540.0', '41766.0'),
(42, '2006-06', '26125.0', '74578.0'),
(43, '2006-07', '48590.0', '181221.0'),
(44, '2006-08', '49450.0', '224905.0'),
(45, '2006-09', '14020.0', '56503.0'),
(46, '2006-10', '2006.0', '7554.0'),
(47, '2006-11', '1145.0', '515.0'),
(48, '2006-12', '4150.0', '427.0');

-- --------------------------------------------------------

--
-- Table structure for table `nsapinakas7`
--

CREATE TABLE `nsapinakas7` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `nsapinakas7`
--

INSERT INTO `nsapinakas7` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '168935.0', '726408.0'),
(2, '2003-02', '180531.0', '672854.0'),
(3, '2003-03', '218961.0', '911621.0'),
(4, '2003-04', '225010.0', '1154800.0'),
(5, '2003-05', '303474.0', '968057.0'),
(6, '2003-06', '319956.0', '1287531.0'),
(7, '2003-07', '433774.0', '2041974.0'),
(8, '2003-08', '519682.0', '2772068.0'),
(9, '2003-09', '309307.0', '1251177.0'),
(10, '2003-10', '239239.0', '848385.0'),
(11, '2003-11', '217867.0', '759370.0'),
(12, '2003-12', '242573.0', '700396.0'),
(13, '2004-01', '0', '606490.0'),
(14, '2004-02', '0', '664290.0'),
(15, '2004-03', '0', '906049.0'),
(16, '2004-04', '0', '970171.0'),
(17, '2004-05', '0', '1025747.0'),
(18, '2004-06', '0', '1256544.0'),
(19, '2004-07', '0', '2203050.0'),
(20, '2004-08', '0', '2577230.0'),
(21, '2004-09', '0', '1279094.0'),
(22, '2004-10', '0', '899841.0'),
(23, '2004-11', '0', '711325.0'),
(24, '2004-12', '0', '657994.0'),
(25, '2005-01', '217446.0', '640626.0'),
(26, '2005-02', '207891.0', '610117.0'),
(27, '2005-03', '249908.0', '849405.0'),
(28, '2005-04', '314813.0', '1049661.0'),
(29, '2005-05', '365648.0', '1011730.0'),
(30, '2005-06', '410622.0', '1279166.0'),
(31, '2005-07', '647757.0', '2343200.0'),
(32, '2005-08', '743750.0', '2993574.0'),
(33, '2005-09', '415533.0', '1370454.0'),
(34, '2005-10', '301199.0', '934041.0'),
(35, '2005-11', '280887.0', '732624.0'),
(36, '2005-12', '291808.0', '715141.0'),
(37, '2006-01', '237810.0', '706480.0'),
(38, '2006-02', '248882.0', '700391.0'),
(39, '2006-03', '275956.0', '882440.0'),
(40, '2006-04', '340357.0', '1238518.0'),
(41, '2006-05', '389585.0', '951399.0'),
(42, '2006-06', '498303.0', '1259473.0'),
(43, '2006-07', '873260.0', '2232067.0'),
(44, '2006-08', '988988.0', '2846809.0'),
(45, '2006-09', '518329.0', '1430748.0'),
(46, '2006-10', '348232.0', '835844.0'),
(47, '2006-11', '328847.0', '815172.0'),
(48, '2006-12', '362120.0', '841829.0');

-- --------------------------------------------------------

--
-- Table structure for table `nsapinakas8`
--

CREATE TABLE `nsapinakas8` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `nsapinakas8`
--

INSERT INTO `nsapinakas8` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '159759.0', '724453.0'),
(2, '2003-02', '171416.0', '671178.0'),
(3, '2003-03', '208376.0', '893194.0'),
(4, '2003-04', '212211.0', '1153436.0'),
(5, '2003-05', '286681.0', '964253.0'),
(6, '2003-06', '289673.0', '1250733.0'),
(7, '2003-07', '364888.0', '1924191.0'),
(8, '2003-08', '424104.0', '2601250.0'),
(9, '2003-09', '286789.0', '1234089.0'),
(10, '2003-10', '225371.0', '844859.0'),
(11, '2003-11', '205025.0', '756040.0'),
(12, '2003-12', '223800.0', '698470.0'),
(13, '2004-01', '0', '606251.0'),
(14, '2004-02', '0', '663817.0'),
(15, '2004-03', '0', '905509.0'),
(16, '2004-04', '0', '968328.0'),
(17, '2004-05', '0', '1019380.0'),
(18, '2004-06', '0', '1197193.0'),
(19, '2004-07', '0', '2034224.0'),
(20, '2004-08', '0', '2375821.0'),
(21, '2004-09', '0', '1250689.0'),
(22, '2004-10', '0', '895648.0'),
(23, '2004-11', '0', '708963.0'),
(24, '2004-12', '0', '654187.0'),
(25, '2005-01', '202249.0', '637293.0'),
(26, '2005-02', '195760.0', '609059.0'),
(27, '2005-03', '235265.0', '846653.0'),
(28, '2005-04', '297641.0', '1047163.0'),
(29, '2005-05', '344724.0', '1005610.0'),
(30, '2005-06', '380713.0', '1226302.0'),
(31, '2005-07', '533441.0', '2134104.0'),
(32, '2005-08', '589423.0', '2710388.0'),
(33, '2005-09', '372502.0', '1346828.0'),
(34, '2005-10', '278777.0', '931506.0'),
(35, '2005-11', '260657.0', '732457.0'),
(36, '2005-12', '265797.0', '715095.0'),
(37, '2006-01', '208926.0', '706469.0'),
(38, '2006-02', '220056.0', '700342.0'),
(39, '2006-03', '249230.0', '882398.0'),
(40, '2006-04', '309780.0', '1236881.0'),
(41, '2006-05', '362036.0', '944189.0'),
(42, '2006-06', '422593.0', '1215988.0'),
(43, '2006-07', '566211.0', '2066511.0'),
(44, '2006-08', '644641.0', '2600133.0'),
(45, '2006-09', '416804.0', '1406826.0'),
(46, '2006-10', '316333.0', '834293.0'),
(47, '2006-11', '299268.0', '814400.0'),
(48, '2006-12', '326420.0', '840531.0');

-- --------------------------------------------------------

--
-- Table structure for table `nsapinakas9`
--

CREATE TABLE `nsapinakas9` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `nsapinakas9`
--

INSERT INTO `nsapinakas9` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '9176.0', '1955.0'),
(2, '2003-02', '9115.0', '1676.0'),
(3, '2003-03', '10585.0', '18427.0'),
(4, '2003-04', '12799.0', '1364.0'),
(5, '2003-05', '16793.0', '3804.0'),
(6, '2003-06', '30283.0', '36798.0'),
(7, '2003-07', '68886.0', '117783.0'),
(8, '2003-08', '95578.0', '170818.0'),
(9, '2003-09', '22518.0', '17088.0'),
(10, '2003-10', '13868.0', '3526.0'),
(11, '2003-11', '12842.0', '3330.0'),
(12, '2003-12', '18773.0', '1926.0'),
(13, '2004-01', '0', '239.0'),
(14, '2004-02', '0', '473.0'),
(15, '2004-03', '0', '540.0'),
(16, '2004-04', '0', '1843.0'),
(17, '2004-05', '0', '6367.0'),
(18, '2004-06', '0', '59351.0'),
(19, '2004-07', '0', '168826.0'),
(20, '2004-08', '0', '201409.0'),
(21, '2004-09', '0', '28405.0'),
(22, '2004-10', '0', '4193.0'),
(23, '2004-11', '0', '2362.0'),
(24, '2004-12', '0', '3807.0'),
(25, '2005-01', '15197.0', '3333.0'),
(26, '2005-02', '12131.0', '1058.0'),
(27, '2005-03', '14643.0', '2752.0'),
(28, '2005-04', '17172.0', '2498.0'),
(29, '2005-05', '20924.0', '6120.0'),
(30, '2005-06', '29909.0', '52864.0'),
(31, '2005-07', '114316.0', '209096.0'),
(32, '2005-08', '154327.0', '283186.0'),
(33, '2005-09', '43031.0', '23626.0'),
(34, '2005-10', '22422.0', '2535.0'),
(35, '2005-11', '20230.0', '167.0'),
(36, '2005-12', '26011.0', '46.0'),
(37, '2006-01', '28884.0', '11.0'),
(38, '2006-02', '28826.0', '49.0'),
(39, '2006-03', '26726.0', '42.0'),
(40, '2006-04', '30577.0', '1637.0'),
(41, '2006-05', '27549.0', '7210.0'),
(42, '2006-06', '75710.0', '43485.0'),
(43, '2006-07', '307049.0', '165556.0'),
(44, '2006-08', '344347.0', '246676.0'),
(45, '2006-09', '101525.0', '23922.0'),
(46, '2006-10', '31899.0', '1551.0'),
(47, '2006-11', '29579.0', '772.0'),
(48, '2006-12', '35700.0', '1298.0');

-- --------------------------------------------------------

--
-- Table structure for table `nsapinakas13`
--

CREATE TABLE `nsapinakas13` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `nsapinakas13`
--

INSERT INTO `nsapinakas13` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '311013.0', '986131.0'),
(2, '2003-02', '325904.0', '985777.0'),
(3, '2003-03', '333207.0', '1348094.0'),
(4, '2003-04', '336501.0', '2685399.0'),
(5, '2003-05', '878700.0', '5424275.0'),
(6, '2003-06', '1747547.0', '7593489.0'),
(7, '2003-07', '2469785.0', '9995376.0'),
(8, '2003-08', '2903230.0', '11153954.0'),
(9, '2003-09', '1985849.0', '7644668.0'),
(10, '2003-10', '571729.0', '4404311.0'),
(11, '2003-11', '317123.0', '1150945.0'),
(12, '2003-12', '340891.0', '1129685.0'),
(13, '2004-01', '0', '828899.0'),
(14, '2004-02', '0', '943205.0'),
(15, '2004-03', '0', '1337085.0'),
(16, '2004-04', '0', '2422046.0'),
(17, '2004-05', '0', '5418574.0'),
(18, '2004-06', '0', '7235729.0'),
(19, '2004-07', '0', '9642797.0'),
(20, '2004-08', '0', '10890700.0'),
(21, '2004-09', '0', '7717705.0'),
(22, '2004-10', '0', '4034547.0'),
(23, '2004-11', '0', '1100611.0'),
(24, '2004-12', '0', '982123.0'),
(25, '2005-01', '426393.0', '877933.0'),
(26, '2005-02', '391402.0', '907821.0'),
(27, '2005-03', '435112.0', '1384753.0'),
(28, '2005-04', '479014.0', '2140027.0'),
(29, '2005-05', '1151467.0', '5605008.0'),
(30, '2005-06', '2375929.0', '7651903.0'),
(31, '2005-07', '3405545.0', '10403935.0'),
(32, '2005-08', '3582989.0', '11892227.0'),
(33, '2005-09', '2350973.0', '8228185.0'),
(34, '2005-10', '671651.0', '4169619.0'),
(35, '2005-11', '381460.0', '1076467.0'),
(36, '2005-12', '419378.0', '926215.0'),
(37, '2006-01', '484198.0', '939764.0'),
(38, '2006-02', '468817.0', '977249.0'),
(39, '2006-03', '482608.0', '1337120.0'),
(40, '2006-04', '532920.0', '2577378.0'),
(41, '2006-05', '1156048.0', '5656578.0'),
(42, '2006-06', '2479048.0', '8111866.0'),
(43, '2006-07', '3821251.0', '10977685.0'),
(44, '2006-08', '3923845.0', '11921729.0'),
(45, '2006-09', '2329377.0', '8679299.0'),
(46, '2006-10', '681118.0', '4303790.0'),
(47, '2006-11', '456298.0', '1214162.0'),
(48, '2006-12', '539851.0', '1099931.0');

-- --------------------------------------------------------

--
-- Table structure for table `nsapinakas14`
--

CREATE TABLE `nsapinakas14` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `nsapinakas14`
--

INSERT INTO `nsapinakas14` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '301613.0', '983542.0'),
(2, '2003-02', '316621.0', '984008.0'),
(3, '2003-03', '322442.0', '1320018.0'),
(4, '2003-04', '323441.0', '2676849.0'),
(5, '2003-05', '858027.0', '5384473.0'),
(6, '2003-06', '1694600.0', '7485213.0'),
(7, '2003-07', '2357172.0', '9691287.0'),
(8, '2003-08', '2746445.0', '10728279.0'),
(9, '2003-09', '1941859.0', '7561884.0'),
(10, '2003-10', '556901.0', '4388192.0'),
(11, '2003-11', '303669.0', '1147075.0'),
(12, '2003-12', '321836.0', '1124883.0'),
(13, '2004-01', '0', '828045.0'),
(14, '2004-02', '0', '941875.0'),
(15, '2004-03', '0', '1335518.0'),
(16, '2004-04', '0', '2410283.0'),
(17, '2004-05', '0', '5372503.0'),
(18, '2004-06', '0', '7119145.0'),
(19, '2004-07', '0', '9336683.0'),
(20, '2004-08', '0', '10519460.0'),
(21, '2004-09', '0', '7631829.0'),
(22, '2004-10', '0', '4019113.0'),
(23, '2004-11', '0', '1097656.0'),
(24, '2004-12', '0', '977683.0'),
(25, '2005-01', '410181.0', '874129.0'),
(26, '2005-02', '378191.0', '906514.0'),
(27, '2005-03', '418669.0', '1380680.0'),
(28, '2005-04', '460869.0', '2129205.0'),
(29, '2005-05', '1126502.0', '5550420.0'),
(30, '2005-06', '2322800.0', '7526953.0'),
(31, '2005-07', '3240560.0', '9990975.0'),
(32, '2005-08', '3378709.0', '11357584.0'),
(33, '2005-09', '2294068.0', '8145285.0'),
(34, '2005-10', '647928.0', '4154175.0'),
(35, '2005-11', '360136.0', '1075741.0'),
(36, '2005-12', '389418.0', '925595.0'),
(37, '2006-01', '449421.0', '939440.0'),
(38, '2006-02', '433794.0', '976902.0'),
(39, '2006-03', '452590.0', '1336682.0'),
(40, '2006-04', '501103.0', '2567603.0'),
(41, '2006-05', '1121959.0', '5607602.0'),
(42, '2006-06', '2377213.0', '7993803.0'),
(43, '2006-07', '3465612.0', '10630908.0'),
(44, '2006-08', '3530048.0', '11450148.0'),
(45, '2006-09', '2213832.0', '8598874.0'),
(46, '2006-10', '647213.0', '4294685.0'),
(47, '2006-11', '425574.0', '1212875.0'),
(48, '2006-12', '500001.0', '1098206.0');

-- --------------------------------------------------------

--
-- Table structure for table `nsapinakas15`
--

CREATE TABLE `nsapinakas15` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `nsbpinakas1`
--

CREATE TABLE `nsbpinakas1` (
  `Counter` int(11) NOT NULL,
  `TIME` varchar(255) DEFAULT NULL,
  `BG` varchar(255) DEFAULT NULL,
  `GR` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `nsbpinakas1`
--

INSERT INTO `nsbpinakas1` (`Counter`, `TIME`, `BG`, `GR`) VALUES
(1, '2003-01', '0', '0'),
(2, '2003-02', '0', '0'),
(3, '2003-03', '0', '0'),
(4, '2003-04', '0', '0'),
(5, '2003-05', '0', '0'),
(6, '2003-06', '0', '0'),
(7, '2003-07', '0', '0'),
(8, '2003-08', '0', '0'),
(9, '2003-09', '0', '0'),
(10, '2003-10', '0', '0'),
(11, '2003-11', '0', '0'),
(12, '2003-12', '0', '0'),
(13, '2004-01', '0', '0'),
(14, '2004-02', '0', '0'),
(15, '2004-03', '0', '0'),
(16, '2004-04', '0', '0'),
(17, '2004-05', '0', '0'),
(18, '2004-06', '0', '0'),
(19, '2004-07', '0', '0'),
(20, '2004-08', '0', '0'),
(21, '2004-09', '0', '0'),
(22, '2004-10', '0', '0'),
(23, '2004-11', '0', '0'),
(24, '2004-12', '0', '0'),
(25, '2005-01', '128471.0', '125490.0'),
(26, '2005-02', '128049.0', '186383.0'),
(27, '2005-03', '129991.0', '324931.0'),
(28, '2005-04', '101931.0', '812246.0'),
(29, '2005-05', '685610.0', '3940448.0'),
(30, '2005-06', '1600492.0', '5324681.0'),
(31, '2005-07', '2167564.0', '6700515.0'),
(32, '2005-08', '2215062.0', '7617283.0'),
(33, '2005-09', '1651539.0', '5704611.0'),
(34, '2005-10', '282502.0', '2657823.0'),
(35, '2005-11', '56985.0', '175639.0'),
(36, '2005-12', '84482.0', '106801.0'),
(37, '2006-01', '155843.0', '112515.0'),
(38, '2006-02', '161792.0', '159107.0'),
(39, '2006-03', '145699.0', '251753.0'),
(40, '2006-04', '111837.0', '978879.0'),
(41, '2006-05', '644424.0', '3914461.0'),
(42, '2006-06', '1493835.0', '5598586.0'),
(43, '2006-07', '2129605.0', '7103690.0'),
(44, '2006-08', '2145097.0', '7572086.0'),
(45, '2006-09', '1448725.0', '5838846.0'),
(46, '2006-10', '235268.0', '2732796.0'),
(47, '2006-11', '72655.0', '208573.0'),
(48, '2006-12', '110482.0', '123565.0');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `aatpinakas1`
--
ALTER TABLE `aatpinakas1`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `aatpinakas5`
--
ALTER TABLE `aatpinakas5`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `aatpinakas9`
--
ALTER TABLE `aatpinakas9`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `aonpinakas1`
--
ALTER TABLE `aonpinakas1`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `aonpinakas5`
--
ALTER TABLE `aonpinakas5`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `aonpinakas9`
--
ALTER TABLE `aonpinakas9`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsapinakas1`
--
ALTER TABLE `nsapinakas1`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsapinakas2`
--
ALTER TABLE `nsapinakas2`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsapinakas3`
--
ALTER TABLE `nsapinakas3`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsapinakas7`
--
ALTER TABLE `nsapinakas7`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsapinakas8`
--
ALTER TABLE `nsapinakas8`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsapinakas9`
--
ALTER TABLE `nsapinakas9`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsapinakas13`
--
ALTER TABLE `nsapinakas13`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsapinakas14`
--
ALTER TABLE `nsapinakas14`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsapinakas15`
--
ALTER TABLE `nsapinakas15`
  ADD PRIMARY KEY (`Counter`);

--
-- Indexes for table `nsbpinakas1`
--
ALTER TABLE `nsbpinakas1`
  ADD PRIMARY KEY (`Counter`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `aatpinakas1`
--
ALTER TABLE `aatpinakas1`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `aatpinakas5`
--
ALTER TABLE `aatpinakas5`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `aatpinakas9`
--
ALTER TABLE `aatpinakas9`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `aonpinakas1`
--
ALTER TABLE `aonpinakas1`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `aonpinakas5`
--
ALTER TABLE `aonpinakas5`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `aonpinakas9`
--
ALTER TABLE `aonpinakas9`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsapinakas1`
--
ALTER TABLE `nsapinakas1`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsapinakas2`
--
ALTER TABLE `nsapinakas2`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsapinakas3`
--
ALTER TABLE `nsapinakas3`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsapinakas7`
--
ALTER TABLE `nsapinakas7`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsapinakas8`
--
ALTER TABLE `nsapinakas8`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsapinakas9`
--
ALTER TABLE `nsapinakas9`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsapinakas13`
--
ALTER TABLE `nsapinakas13`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsapinakas14`
--
ALTER TABLE `nsapinakas14`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsapinakas15`
--
ALTER TABLE `nsapinakas15`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `nsbpinakas1`
--
ALTER TABLE `nsbpinakas1`
  MODIFY `Counter` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
