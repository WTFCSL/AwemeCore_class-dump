//
//     Generated by private class-dump
//

@class NSString, UIViewController;

@interface IESLiveCurrentShowVCRecordServiceImpl : NSObject <IESLiveCurrentShowVCRecordService> {
    UIViewController *_innerCurrentShowVC;
    NSString *_innerCurrentShowVCName;
}

@property (weak, nonatomic) UIViewController *innerCurrentShowVC;
@property (copy, nonatomic) NSString *innerCurrentShowVCName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)currentShowVC;
- (void)setCurrentShowVC:(id)arg0;
- (id)currentShowVCName;
- (id)innerCurrentShowVC;
- (void)setInnerCurrentShowVC:(id)arg0;
- (id)innerCurrentShowVCName;
- (void)setInnerCurrentShowVCName:(id)arg0;
- (void).cxx_destruct;

@end
