//
//     Generated by private class-dump
//

@protocol AWESharePanelListCellModel, AWESharePanelListCell;

@interface AWESharePanelListConfigurator : NSObject {
    id<AWESharePanelListCellModel> _cellModel;
    id<AWESharePanelListCell> _cell;
}

@property (retain, nonatomic) id<AWESharePanelListCellModel> cellModel;
@property (retain, nonatomic) id<AWESharePanelListCell> cell;

+ (id)configuratorWithCell:(id)arg0 cellModel:(id)arg1;

- (void)setCellModel:(id)arg0;
- (id)initWithCell:(id)arg0 cellModel:(id)arg1;
- (void)CONFIGURE_WITH_TYPE_AWEShareTitleCell;
- (void)CONFIGURE_WITH_TYPE_AWESharePanelListContainerCell;
- (void)CONFIGURE_WITH_TYPE_AWESharePanelListVerticalCell;
- (void)CONFIGURE_WITH_TYPE_AWESharePanelListIMContainerCell;
- (id)configure;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:(id)arg0;
- (id)cellModel;

@end