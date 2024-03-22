//
//     Generated by private class-dump
//

@protocol AWESearchEntryInterface <HTSService>

- (BOOL)isShowingSearchViewControllerWithTabType:(unsigned long long)arg0;
- (BOOL)isShowingMiddleViewWithController:(id)arg0;
- (id)anEpisodesView;
- (Class)getSearchFilmTVEpisodesClass;
- (Class)getSearchVarietyEpisodeTableViewCellClass;
- (id)aTagView;
- (id)searchEntranceView;
- (id)searchEntranceViewWithEnterFrom:(id)arg0 logExtraDict:(id)arg1;
- (id)searchVideoUserGuideViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 logExtra:(id)arg1;
- (id)searchFeedVideoUserGuideViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 logExtra:(id)arg1;
- (id)searchVideoFeedMaskViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)newAWESearchLiveStatusView;
- (Class)getAWESearchLiveStatusViewClass;
- (long long)feedSearchBarStyle;
- (BOOL)openSchemaWithFeedbackAnchor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 schemaUrl:(id)arg1 topView:(id)arg2;
- (id)registerSearchActivityPluginWithConfig:(id)arg0;

@end