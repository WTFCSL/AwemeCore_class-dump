//
//     Generated by private class-dump
//

@class IESECListKitListUpdater, NSString, IESECLynxCardBridgeMethod, UICollectionViewCell, IESECListKitItemDataModel;
@protocol IESECListKitLynxCardLifeCycle, IESECListKitLynxCardControllerDelegate;

@interface IESECListKitLynxCellController : NSObject <IESECLynxCollectionViewCellDelegate, IESECListKitCellControllerProtocol, IESECLynxCardDelegate> {
    BOOL _isReloadingLayout;
    IESECListKitItemDataModel *_bffItemData;
    UICollectionViewCell *_cell;
    IESECListKitListUpdater *_listUpdater;
    long long _section;
    long long _index;
    id _cellModel;
    id<IESECListKitLynxCardLifeCycle> _lynxCardDelegate;
    id<IESECListKitLynxCardControllerDelegate> _delegate;
    IESECLynxCardBridgeMethod *_dynamicDataJSB;
}

@property (nonatomic) BOOL isReloadingLayout;
@property (retain, nonatomic) IESECLynxCardBridgeMethod *dynamicDataJSB;
@property (weak, nonatomic) id<IESECListKitLynxCardLifeCycle> lynxCardDelegate;
@property (weak, nonatomic) id<IESECListKitLynxCardControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)setCellModel:(id)arg0;
- (void)viewDidFirstScreen:(id)arg0;
- (void)didSelected;
- (void)configCell;
- (id)listUpdater;
- (void)setListUpdater:(id)arg0;
- (void)lynxCard:(id)arg0 sizeDidChanged:(struct CGSize { double x0; double x1; })arg1;
- (void)lynxCard:(id)arg0 didLoadFail:(id)arg1;
- (void)lynxCard:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)lynxCard:(id)arg0 receiveError:(id)arg1;
- (void)lynxCard:(id)arg0 onSetup:(id)arg1;
- (void)lynxCard:(id)arg0 setupPerf:(id)arg1;
- (void)lynxCard:(id)arg0 updatePerf:(id)arg1;
- (void)shouldRemoveSelf:(id)arg0 animated:(BOOL)arg1;
- (void)lynxCard:(id)arg0 didUpdateDataWithLynxViewFromType:(unsigned long long)arg1 perfDict:(id)arg2;
- (BOOL)pageDidAppeared;
- (void)lynxCardDataChanged:(id)arg0;
- (void)lynxCard:(id)arg0 willSendPageVisibleEvents:(BOOL)arg1 source:(unsigned long long)arg2 isFirstShow:(BOOL)arg3;
- (id)bffItemData;
- (void)setBffItemData:(id)arg0;
- (double)heightForModel:(id)arg0 itemWidth:(double)arg1;
- (void)willDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (void)didEndDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (void)mediaPlayerPlayWithAutoPlayDuration:(double)arg0 autoPlayManager:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)mediaPlayerPause;
- (id)dynamicDataJSB;
- (void)registerBridgesIfNeed;
- (id)lynxCardDelegate;
- (void)updateListLayoutLynxCard:(id)arg0 sizeDidChanged:(struct CGSize { double x0; double x1; })arg1;
- (BOOL)isReloadingLayout;
- (void)setIsReloadingLayout:(BOOL)arg0;
- (void)updateLayoutAndCanBeCanceled;
- (void)setLynxCardDelegate:(id)arg0;
- (void)setDynamicDataJSB:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (void)setSection:(long long)arg0;
- (id)delegate;
- (long long)index;
- (void)setDelegate:(id)arg0;
- (long long)section;
- (id)cell;
- (void)setCell:(id)arg0;
- (id)cellModel;

@end