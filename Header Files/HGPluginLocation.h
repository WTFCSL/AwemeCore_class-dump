//
//     Generated by private class-dump
//

@interface HGPluginLocation : HGPluginBase

+ (struct CLLocationCoordinate2D { double x0; double x1; })convertWGSToGCJ:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })gcj02Encrypt:(double)arg0 bdLon:(double)arg1;
+ (BOOL)outOfCh:(double)arg0 bdLon:(double)arg1;
+ (double)transformLat:(double)arg0 bdLon:(double)arg1;
+ (double)transformLon:(double)arg0 bdLon:(double)arg1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })convertGCJToWGS:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;

- (void)getLocationWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;

@end
