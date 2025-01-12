//
//     Generated by private class-dump
//

@class UIColor, IESLiveKTVOrderPanelViewModel;
@protocol IESLiveKTVOrderPanelProtocol;

@interface IESLiveKTVOrderPanelBaseSectionModel : NSObject <IGListDiffable> {
    BOOL _needLayoutSubView;
    IESLiveKTVOrderPanelViewModel *_fatherModel;
    UIColor *_backgroundColor;
    id<IESLiveKTVOrderPanelProtocol> _panelModel;
    double _cornerRadius;
    unsigned long long _rectCorner;
    struct CGSize { double width; double height; } _sectionSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
}

@property (weak, nonatomic) IESLiveKTVOrderPanelViewModel *fatherModel;
@property (nonatomic) struct CGSize { double width; double height; } sectionSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) id<IESLiveKTVOrderPanelProtocol> panelModel;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) BOOL needLayoutSubView;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setRectCorner:(unsigned long long)arg0;
- (unsigned long long)rectCorner;
- (id)panelModel;
- (void)setPanelModel:(id)arg0;
- (void)setNeedLayoutSubView:(BOOL)arg0;
- (void)setFatherModel:(id)arg0;
- (id)fatherModel;
- (void)refreshModelWithFatherModel:(id)arg0;
- (BOOL)needLayoutSubView;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void).cxx_destruct;
- (unsigned long long)sectionType;
- (double)cornerRadius;
- (long long)index;
- (id)backgroundColor;
- (void)setCornerRadius:(double)arg0;
- (void)setBackgroundColor:(id)arg0;
- (Class)sectionClass;
- (struct CGSize { double x0; double x1; })sectionSize;
- (void)setSectionSize:(struct CGSize { double x0; double x1; })arg0;

@end
