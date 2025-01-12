//
//     Generated by private class-dump
//

@class NSString, BDPFavoritesTipFloating_HG, BDPFavoritesTipBubble_HG, BDPUniqueID;

@interface BDPPluginFavorites_HG : BDPBridgeInstancePlugin <BDPFavoritesTipBubbleDelegate_HG, BDPFavoritesTipFloatingDelegate_HG, BDPAppDidAddedToFavoritesListMessage, BDPToolBarMessage> {
    BDPUniqueID *_uniqueID;
    BDPFavoritesTipBubble_HG *_tipBubble;
    BDPFavoritesTipFloating_HG *_tipFloating;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFavoritesTipBubble_HG *tipBubble;
@property (retain, nonatomic) BDPFavoritesTipFloating_HG *tipFloating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)tipViewTypeForTypeParam:(id)arg0;
+ (long long)tipViewPosForPosParam:(id)arg0;
+ (BOOL)isToolBarViewVisible:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMoreButtonFrame:(id)arg0;

- (void)needLayoutFavoritesTips:(id)arg0 withContainerVC:(id)arg1;
- (void)hideFavoritesTips:(id)arg0;
- (void)toolBarDidClickMoreButton:(id)arg0;
- (void)buildFavoritesPiugin;
- (void)hideFavoritesFloating;
- (void)hideFavoritesBubble;
- (void)_showFavoriteGuideForTip:(id)arg0 callback:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)_showFavoriteGuideForBar:(id)arg0 callback:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)_showFavoriteGuideForCustomize:(id)arg0 callback:(id /* block */)arg1 uniqueID:(id)arg2;
- (BOOL)showFavoritesBubble:(id)arg0 inContainerVC:(id)arg1;
- (BOOL)showFavoritesFloating:(id)arg0 withPosition:(long long)arg1 inContainerVC:(id)arg2;
- (id)tipBubble;
- (void)setTipBubble:(id)arg0;
- (void)layoutFavoritesBubble:(id)arg0 withContainerVC:(id)arg1;
- (id)tipFloating;
- (void)setTipFloating:(id)arg0;
- (void)favoritesTipBubbleDidHidden:(id)arg0 closeType:(id)arg1 showDuration:(double)arg2;
- (void)favoritesTipFloatingDidHidden:(id)arg0 closeType:(id)arg1 showDuration:(double)arg2;
- (void)favoritesTipFloatingDidAddClicked:(id)arg0 showDuration:(double)arg1;
- (void)getFavoritesListWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)addToFavoritesWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)removeFromFavoritesWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)sortFavoritesWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)showRevisitGuideWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)addToUserFavoritesWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)isInUserFavoritesSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)showFavoriteGuideWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)appDidAddedToFavoritesList:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)dealloc;

@end
