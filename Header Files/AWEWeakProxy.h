//
//     Generated by private class-dump
//

@class AWEIndexView;
@protocol AWETableViewSectionIndexDelegate;

@interface AWEWeakProxy : NSObject {
    AWEIndexView *_indexView;
    id<AWETableViewSectionIndexDelegate> _awe_indexViewDelegate;
}

@property (weak, nonatomic) AWEIndexView *indexView;
@property (weak, nonatomic) id<AWETableViewSectionIndexDelegate> awe_indexViewDelegate;

- (id)awe_indexViewDelegate;
- (void)setAwe_indexViewDelegate:(id)arg0;
- (id)indexView;
- (void)setIndexView:(id)arg0;
- (void).cxx_destruct;

@end
