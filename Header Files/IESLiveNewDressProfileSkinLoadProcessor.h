//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveNewDressResourceLoadDelegate;

@interface IESLiveNewDressProfileSkinLoadProcessor : NSObject <IESLiveNewDressResourceLoadProcessor> {
    id<IESLiveNewDressResourceLoadDelegate> _delegate;
}

@property (weak, nonatomic) id<IESLiveNewDressResourceLoadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)dressType;

- (BOOL)loadDressResource:(id)arg0 error:(id *)arg1;
- (BOOL)isAvaliableResourceWithAssetID:(long long)arg0;
- (void)downloadEffectWithAssetIDs:(id)arg0 dress:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
