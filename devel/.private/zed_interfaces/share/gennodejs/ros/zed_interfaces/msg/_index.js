
"use strict";

let Skeleton2D = require('./Skeleton2D.js');
let RGBDSensors = require('./RGBDSensors.js');
let ObjectsStamped = require('./ObjectsStamped.js');
let Keypoint3D = require('./Keypoint3D.js');
let Keypoint2Df = require('./Keypoint2Df.js');
let Skeleton3D = require('./Skeleton3D.js');
let Keypoint2Di = require('./Keypoint2Di.js');
let PosTrackStatus = require('./PosTrackStatus.js');
let BoundingBox2Df = require('./BoundingBox2Df.js');
let Object = require('./Object.js');
let PlaneStamped = require('./PlaneStamped.js');
let BoundingBox2Di = require('./BoundingBox2Di.js');
let BoundingBox3D = require('./BoundingBox3D.js');

module.exports = {
  Skeleton2D: Skeleton2D,
  RGBDSensors: RGBDSensors,
  ObjectsStamped: ObjectsStamped,
  Keypoint3D: Keypoint3D,
  Keypoint2Df: Keypoint2Df,
  Skeleton3D: Skeleton3D,
  Keypoint2Di: Keypoint2Di,
  PosTrackStatus: PosTrackStatus,
  BoundingBox2Df: BoundingBox2Df,
  Object: Object,
  PlaneStamped: PlaneStamped,
  BoundingBox2Di: BoundingBox2Di,
  BoundingBox3D: BoundingBox3D,
};
