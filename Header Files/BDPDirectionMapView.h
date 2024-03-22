//
//     Generated by private class-dump
//

@class BDPLocationModel, NSString, NSArray, BDPDirectionAnnotation, MKAnnotationView, BDPDirectionDetailView;
@protocol BDPDirectionMapViewDelegate;

@interface BDPDirectionMapView : MKMapView <MKMapViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _shouldShowNavi;
    BOOL _shouldShowOrigin;
    BOOL _shouldShowWalking;
    BOOL _shouldShowDriving;
    long long _currentType;
    NSString *_drivingTime;
    NSString *_walkingTime;
    NSArray *_drivingOverlays;
    NSArray *_walkingOverlays;
    BDPLocationModel *_model;
    BDPDirectionDetailView *_detailView;
    BDPDirectionAnnotation *_poiAnnotation;
    BDPDirectionAnnotation *_userAnnotation;
    MKAnnotationView *_poiAnnotationView;
    MKAnnotationView *_userAnnotationView;
    id<BDPDirectionMapViewDelegate> _mapViewDelegate;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _destination;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _origin;
}

@property (nonatomic) BOOL shouldShowOrigin;
@property (nonatomic) BOOL shouldShowWalking;
@property (nonatomic) BOOL shouldShowDriving;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } destination;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } origin;
@property (copy, nonatomic) NSString *drivingTime;
@property (copy, nonatomic) NSString *walkingTime;
@property (retain, nonatomic) NSArray *drivingOverlays;
@property (retain, nonatomic) NSArray *walkingOverlays;
@property (retain, nonatomic) BDPLocationModel *model;
@property (retain, nonatomic) BDPDirectionDetailView *detailView;
@property (retain, nonatomic) BDPDirectionAnnotation *poiAnnotation;
@property (retain, nonatomic) BDPDirectionAnnotation *userAnnotation;
@property (retain, nonatomic) MKAnnotationView *poiAnnotationView;
@property (retain, nonatomic) MKAnnotationView *userAnnotationView;
@property (weak, nonatomic) id<BDPDirectionMapViewDelegate> mapViewDelegate;
@property (nonatomic) BOOL shouldShowNavi;
@property (nonatomic) long long currentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)arg0 delegate:(id)arg1;
- (void)setCurrentType:(long long)arg0;
- (void)showOverlaysForCurrentTransportType;
- (id)walkingOverlays;
- (id)drivingOverlays;
- (void)setDrivingOverlays:(id)arg0;
- (void)setWalkingOverlays:(id)arg0;
- (void)updateMapStatus;
- (void)setShouldShowOrigin:(BOOL)arg0;
- (void)constructDirectionsWithCompletion:(id /* block */)arg0;
- (void)setDrivingTime:(id)arg0;
- (void)setShouldShowDriving:(BOOL)arg0;
- (void)setShouldShowWalking:(BOOL)arg0;
- (void)setWalkingTime:(id)arg0;
- (id)drivingTime;
- (id)walkingTime;
- (void)setShouldShowNavi:(BOOL)arg0;
- (BOOL)shouldShowNavi;
- (BOOL)shouldShowOrigin;
- (id)poiAnnotationView;
- (void)setUserAnnotation:(id)arg0;
- (id)userAnnotation;
- (void)setPoiAnnotation:(id)arg0;
- (id)poiAnnotation;
- (id)userAnnotationView;
- (void)requestDirectionsWithCompletion:(id /* block */)arg0;
- (BOOL)shouldShowWalking;
- (BOOL)shouldShowDriving;
- (void)setPoiAnnotationView:(id)arg0;
- (void)setUserAnnotationView:(id)arg0;
- (void)setModel:(id)arg0;
- (struct CLLocationCoordinate2D { double x0; double x1; })destination;
- (void).cxx_destruct;
- (id)model;
- (void)setDestination:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (struct CLLocationCoordinate2D { double x0; double x1; })origin;
- (void)setOrigin:(struct CLLocationCoordinate2D { double x0; double x1; })arg0;
- (id)mapView:(id)arg0 viewForAnnotation:(id)arg1;
- (id)mapView:(id)arg0 rendererForOverlay:(id)arg1;
- (void)handleTap:(id)arg0;
- (id)detailView;
- (void)setDetailView:(id)arg0;
- (long long)currentType;
- (id)mapViewDelegate;
- (void)setMapViewDelegate:(id)arg0;

@end