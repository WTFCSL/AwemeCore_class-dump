//
//     Generated by private class-dump
//

@class NSString;

@interface BDPFavoritesMorePanelItemProvider : NSObject <BDPMorePanelItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleRemoveResultEvent:(id)arg0 type:(long long)arg1 success:(BOOL)arg2;
+ (void)handleAddResultEvent:(id)arg0 type:(long long)arg1 success:(BOOL)arg2 isFirst:(BOOL)arg3;
+ (void)handleAddResultEvent:(id)arg0 type:(long long)arg1 success:(BOOL)arg2 isFirst:(BOOL)arg3 extraInfo:(id)arg4;
+ (id)getMorePanelItemsWithUniqueID:(id)arg0 extraInfo:(id)arg1;

@end