//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSMutableDictionary;

@interface IESECGoodsListCardProviderServiceImpl : NSObject <IESECGoodsListCardProviderService> {
    NSMutableDictionary *_selectedSKUItem;
    NSMutableArray *_managers;
}

@property (retain, nonatomic) NSMutableArray *managers;
@property (retain, nonatomic) NSMutableDictionary *selectedSKUItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardview:(id)arg0 envDelagate:(id)arg1;
+ (void)trackCardShowWithInfo:(id)arg0 view:(id)arg1;
+ (id)dealSearchparams:(id)arg0 withJson:(id)arg1;
+ (BOOL)isShowingGoodsListView:(id)arg0;
+ (BOOL)isSimilarState:(id)arg0;
+ (id)getGoodsIDfromOriginJson:(id)arg0;
+ (id)targetViewWithRoomID:(id)arg0;
+ (id)getSourceVcWithRoomID:(id)arg0;
+ (id)cellIdentifier;
+ (id)getService;

- (id)selectedSKUItem;
- (void)setSelectedSKUItem:(id)arg0;
- (id)managers;
- (void).cxx_destruct;
- (void)setManagers:(id)arg0;

@end
