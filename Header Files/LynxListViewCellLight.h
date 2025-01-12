//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface LynxListViewCellLight : UIView <LynxListCell> {
    BOOL _removed;
    BOOL _isInStickyStatus;
    UIView *_contentView;
    NSString *_reuseIdentifier;
    long long _updateToPath;
    NSString *_itemKey;
    long long _columnIndex;
    long long _layoutType;
    double _stickyPosition;
    long long _operationID;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) long long updateToPath;
@property (retain, nonatomic) NSString *itemKey;
@property (nonatomic) BOOL removed;
@property (nonatomic) long long columnIndex;
@property (nonatomic) long long layoutType;
@property (nonatomic) BOOL isInStickyStatus;
@property (nonatomic) double stickyPosition;
@property (nonatomic) long long operationID;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUpdateToPath:(long long)arg0;
- (long long)updateToPath;
- (void)setItemKey:(id)arg0;
- (BOOL)isInStickyStatus;
- (void)setIsInStickyStatus:(BOOL)arg0;
- (void)applyLayoutModel:(id)arg0;
- (double)stickyPosition;
- (void)setStickyPosition:(double)arg0;
- (long long)columnIndex;
- (long long)layoutType;
- (void)setLayoutType:(long long)arg0;
- (id)init;
- (long long)operationID;
- (void).cxx_destruct;
- (void)setRemoved:(BOOL)arg0;
- (id)contentView;
- (BOOL)removed;
- (void)setColumnIndex:(long long)arg0;
- (id)reuseIdentifier;
- (void)setContentView:(id)arg0;
- (void)setReuseIdentifier:(id)arg0;
- (void)setOperationID:(long long)arg0;
- (id)itemKey;

@end
