//
//     Generated by private class-dump
//

@class NSString, NSMapTable;

@interface AWEOpenPushGuideManager : NSObject <AWEOpenPushGuideManagerProtocol> {
    NSMapTable *_guidesInfo;
}

@property (retain, nonatomic) NSMapTable *guidesInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showGuideWithTitle:(id)arg0 linkString:(id)arg1 enterFrom:(id)arg2 bottomOffset:(double)arg3 category:(id)arg4 onView:(id)arg5 actionBlock:(id /* block */)arg6;
+ (void)showGuideWithTitle:(id)arg0 linkString:(id)arg1 enterFrom:(id)arg2 bottomOffset:(double)arg3 category:(id)arg4 onView:(id)arg5 withBottomExtended:(BOOL)arg6 actionBlock:(id /* block */)arg7;
+ (BOOL)checkShowupCondition;
+ (void)cleanupAllGuides;
+ (void)updateShowupCondition;
+ (void)_cleanupAllGuides;
+ (void)showGuideWithTitle:(id)arg0 linkString:(id)arg1 enterFrom:(id)arg2 bottomOffset:(double)arg3 category:(id)arg4 actionBlock:(id /* block */)arg5;
+ (id)sharedInstance;

- (id)guidesInfo;
- (void)setGuidesInfo:(id)arg0;
- (void).cxx_destruct;

@end
