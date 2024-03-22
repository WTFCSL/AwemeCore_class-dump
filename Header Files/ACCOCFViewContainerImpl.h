//
//     Generated by private class-dump
//

@class NSString, NSMapTable, UIView;
@protocol ACCOCFLayoutManagerProtocol;

@interface ACCOCFViewContainerImpl : NSObject <ACCOCFViewContainerProtocol> {
    id<ACCOCFLayoutManagerProtocol> _layoutManager;
    UIView *_rootView;
    NSMapTable *_viewMapTable;
}

@property (retain, nonatomic) id<ACCOCFLayoutManagerProtocol> layoutManager;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) NSMapTable *viewMapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayoutManager:(id)arg0;
- (id)viewOfType:(unsigned long long)arg0;
- (void)assignRootView:(id)arg0;
- (void)addView:(id)arg0 forType:(unsigned long long)arg1;
- (id)viewMapTable;
- (void)setViewMapTable:(id)arg0;
- (id)layoutManager;
- (void).cxx_destruct;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (void)setLayoutManager:(id)arg0;

@end