//
//     Generated by private class-dump
//

@class UIImage, NSIndexPath, NSString;
@protocol ACCSideslipPropBaseCellUIConfigProtocol, ACCSideslipPropPickCellCoordinatorProtocol;

@interface ACCSideslipCreateAIGCCellModel : NSObject <ACCSideslipPropBaseCellModelProtocol> {
    BOOL _isUnavailable;
    NSIndexPath *_indexPath;
    id<ACCSideslipPropPickCellCoordinatorProtocol> _coordinator;
    NSString *accessibilityText;
    id<ACCSideslipPropBaseCellUIConfigProtocol> _uiConfig;
}

@property (retain, nonatomic) id<ACCSideslipPropBaseCellUIConfigProtocol> uiConfig;
@property (readonly, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<ACCSideslipPropPickCellCoordinatorProtocol> coordinator;
@property (readonly, copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) BOOL isUnavailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uiConfig;
- (void)setUiConfig:(id)arg0;
- (id)coordinator;
- (id)icon;
- (void).cxx_destruct;
- (void)setIndexPath:(id)arg0;
- (BOOL)isUnavailable;
- (id)indexPath;
- (void)setCoordinator:(id)arg0;
- (id)accessibilityText;
- (void)setIsUnavailable:(BOOL)arg0;

@end
