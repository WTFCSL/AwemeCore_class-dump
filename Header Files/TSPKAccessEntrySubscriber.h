//
//     Generated by private class-dump
//

@class NSString;

@interface TSPKAccessEntrySubscriber : NSObject <TSPKSubscriber> {
    NSString *_appstatus;
}

@property (retain) NSString *appstatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationBecomeActive;
- (BOOL)canHandelEvent:(id)arg0;
- (id)hanleEvent:(id)arg0;
- (void)setAppstatus:(id)arg0;
- (void)startObserverAppStatus;
- (id)appstatus;
- (void)applicationBecomeInactive;
- (id)init;
- (id)uniqueId;
- (void).cxx_destruct;

@end