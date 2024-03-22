//
//     Generated by private class-dump
//

@class NSString, AWEHGIMConfirmView;

@interface AWEHGPluginIMImpl : NSObject <HGIMPluginDelegate> {
    AWEHGIMConfirmView *_view;
    NSString *_functionFrom;
}

@property (retain, nonatomic) AWEHGIMConfirmView *view;
@property (retain, nonatomic) NSString *functionFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)hg_shareMessageToFriend:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
- (void)setFunctionFrom:(id)arg0;
- (id)generateSchema:(id)arg0 query:(id)arg1;
- (id)functionFrom;
- (void)handleResult:(BOOL)arg0 uniqueID:(id)arg1 isFriend:(BOOL)arg2;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (void)dealloc;
- (id)view;

@end
