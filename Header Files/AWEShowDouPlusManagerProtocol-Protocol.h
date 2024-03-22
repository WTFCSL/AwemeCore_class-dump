//
//     Generated by private class-dump
//

@class NSString, AWEDouPlusToastInfoResponseModel, AWEAwemeModel;
@protocol AWEShowDouPlusManagerDelegate;

@protocol AWEShowDouPlusManagerProtocol <NSObject>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWEShowDouPlusManagerDelegate> delegate;
@property (retain, nonatomic) AWEDouPlusToastInfoResponseModel *douplusInfoModel;
@property (copy, nonatomic) id /* block */ shareActionBlock;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id /* block */)shareActionBlock;
- (void)setShareActionBlock:(id /* block */)arg0;
- (void)showDouPlusGuideBubbleAlignWithTargetView:(id)arg0 inContainerView:(id)arg1 inDirection:(long long)arg2;
- (id)douplusInfoModel;
- (void)setDouplusInfoModel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
