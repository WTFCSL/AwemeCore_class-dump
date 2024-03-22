//
//     Generated by private class-dump
//

@class NSString;
@protocol AWERVPageMetaConfigProtocol, AWERVPagePlayerConfigProtocol, AWERVPageBottomConfigProtocol, AWERVPageListConfigProtocol;

@protocol AWERVPageConfigProtocol <NSObject>

@property (retain, nonatomic) id<AWERVPagePlayerConfigProtocol> playerConfig;
@property (retain, nonatomic) id<AWERVPageMetaConfigProtocol> metaConfig;
@property (retain, nonatomic) id<AWERVPageListConfigProtocol> listConfig;
@property (retain, nonatomic) id<AWERVPageBottomConfigProtocol> bottomConfig;
@property (copy, nonatomic) NSString *preferTheme;
@property (nonatomic) BOOL hiddenBottomInteractView;
@property (nonatomic) BOOL forceInteractionViewMoveUp;

- (id)playerConfig;
- (void)setPlayerConfig:(id)arg0;
- (id)bottomConfig;
- (void)setBottomConfig:(id)arg0;
- (BOOL)hiddenBottomInteractView;
- (id)listConfig;
- (id)preferTheme;
- (id)metaConfig;
- (void)setMetaConfig:(id)arg0;
- (void)setListConfig:(id)arg0;
- (void)setPreferTheme:(id)arg0;
- (void)setHiddenBottomInteractView:(BOOL)arg0;
- (BOOL)forceInteractionViewMoveUp;
- (void)setForceInteractionViewMoveUp:(BOOL)arg0;

@end
