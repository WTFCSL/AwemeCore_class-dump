//
//     Generated by private class-dump
//

@protocol DitoPageViewDataSource <NSObject>

- (long long)pageView:(id)arg0 numberOfComponentInContainer:(id)arg1;
- (id)pageView:(id)arg0 registerReuseIdentifierAtIndex:(unsigned long long)arg1 inContainer:(id)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageView:(id)arg0 layoutContainer:(id)arg1;
- (id)pageView:(id)arg0 componentViewAtIndex:(unsigned long long)arg1 inContainer:(id)arg2 reuseComponentView:(id)arg3 nodeView:(id)arg4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageView:(id)arg0 containerType:(id)arg1 componentFrameAtIndex:(long long)arg2;

@optional

- (long long)pageView:(id)arg0 containerType:(id)arg1 componentIndexAtTag:(id)arg2;
- (void)pageView:(id)arg0 containerType:(id)arg1 removeComponentAtTag:(id)arg2;
- (id)layoutDecorationViews:(id)arg0;

@end
