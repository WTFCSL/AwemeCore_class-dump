//
//     Generated by private class-dump
//

@class NSString, NSTimer, IESECShopProductsPlayableTask;

@interface IESECShopProductsImageSlideshowControl : NSObject <IESECShopProductsPlayableMediaControl> {
    NSTimer *_timer;
    IESECShopProductsPlayableTask *_currentTask;
}

@property (readonly, nonatomic) IESECShopProductsPlayableTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playWithTask:(id)arg0;
- (void)skipCurrentTask;
- (void).cxx_destruct;
- (void)stopPlaying;
- (id)task;

@end
