//
//     Generated by private class-dump
//

@class IESLiveInnerFeedContext, IESLiveFinishedRoomAutoSlider, NSString;

@interface IESLiveInnerFeedAutoSlideController : NSObject <IESLiveInnerFeedDataControlAction> {
    IESLiveInnerFeedContext *_context;
    IESLiveFinishedRoomAutoSlider *_autoSlider;
}

@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) IESLiveFinishedRoomAutoSlider *autoSlider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillMountObject:(id)arg0 atIndex:(long long)arg1 currentIndex:(long long)arg2;
- (void)innerFeedWillCloseItem:(id)arg0 atIndex:(long long)arg1 withType:(unsigned long long)arg2;
- (id)autoSlider;
- (void)setAutoSlider:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
