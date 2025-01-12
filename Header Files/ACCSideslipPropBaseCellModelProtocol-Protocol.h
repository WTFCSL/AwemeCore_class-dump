//
//     Generated by private class-dump
//

@class NSString, NSIndexPath;
@protocol ACCSideslipPropPickCellCoordinatorProtocol;

@protocol ACCSideslipPropBaseCellModelProtocol <NSObject>

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<ACCSideslipPropPickCellCoordinatorProtocol> coordinator;
@property (readonly, copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) BOOL isUnavailable;

- (id)coordinator;
- (void)setIndexPath:(id)arg0;
- (BOOL)isUnavailable;
- (id)indexPath;
- (void)setCoordinator:(id)arg0;
- (id)accessibilityText;
- (void)setIsUnavailable:(BOOL)arg0;

@optional

- (void)cellWillDisplay;
- (void)cellDidEndDisplaying;
- (id)uiConfig;
- (void)didSelectedCell;

@end
