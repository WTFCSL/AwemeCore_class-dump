//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveViewZoomService;

@interface IESLiveViewZoomServiceWrapper : NSObject <IESLiveViewZoomService> {
    id<IESLiveViewZoomService> _viewZoomService;
}

@property (retain, nonatomic) id<IESLiveViewZoomService> viewZoomService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)viewZoomModeOn;
- (unsigned long long)currentViewZoomMode;
- (double)currentViewZoomScale;
- (void)setViewZoomService:(id)arg0;
- (id)viewZoomService;
- (id)initWithViewZoomService:(id)arg0;
- (void).cxx_destruct;

@end
