//
//     Generated by private class-dump
//

@class NSString, IESECListKitItemDataModel;
@protocol IESECListKitCellControllerProtocol, IESECListKitCellModelDelegate;

@interface IESECListKitLynxCellModel : NSObject <IESECListKitCellModelProtocol> {
    BOOL _isFirstShow;
    id<IESECListKitCellModelDelegate> _delegate;
    IESECListKitItemDataModel *_bffItemData;
    id _model;
    unsigned long long _engineType;
    id<IESECListKitCellControllerProtocol> _cellController;
    Class _cellClass;
    struct CGSize { double width; double height; } _itemSize;
}

@property (weak, nonatomic) id<IESECListKitCellModelDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) BOOL isFirstShow;
@property (readonly, nonatomic) id<IESECListKitCellControllerProtocol> cellController;
@property (readonly, nonatomic) unsigned long long engineType;
@property (readonly, nonatomic) id model;
@property (readonly, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (readonly, nonatomic) Class cellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsFirstShow:(BOOL)arg0;
- (BOOL)isFirstShow;
- (id)cellController;
- (id)bffItemData;
- (id)initWithBFFItemData:(id)arg0 itemConfig:(id)arg1 cellWidth:(double)arg2 context:(id)arg3;
- (void)updateItemData:(id)arg0;
- (unsigned long long)engineType;
- (void).cxx_destruct;
- (id)model;
- (Class)cellClass;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)dealloc;
- (void)setItemSize:(struct CGSize { double x0; double x1; })arg0;

@end
