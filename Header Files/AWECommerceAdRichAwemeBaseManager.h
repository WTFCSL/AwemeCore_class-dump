//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol AWECommerceAdRichAwemeBaseManager;

@interface AWECommerceAdRichAwemeBaseManager : NSObject <AWECommerceAdRichAwemeBaseManager> {
    NSObject<AWECommerceAdRichAwemeBaseManager> *_manager;
}

@property (retain, nonatomic) NSObject<AWECommerceAdRichAwemeBaseManager> *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)feedCanAutoPlayWithPresentedViewController:(id)arg0;
+ (Class)provideManager;
+ (unsigned long long)albumSlideAutoReplayInAdRichAweme:(id)arg0;

- (void)enterWithInteractionViewController:(id)arg0 model:(id)arg1;
- (BOOL)isRichAwemeManuallySlide:(unsigned long long)arg0;
- (void)leave;
- (void)resume;
- (void).cxx_destruct;
- (void)setManager:(id)arg0;
- (void)pause;
- (id)manager;

@end
