//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@protocol AWELandscapeFeedEntryViewProtocol <NSObject>

@property (nonatomic, retain) AWEAwemeModel *model;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, copy) id /* block */ didUpdateHiddenBlock;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id /* block */)didUpdateHiddenBlock;
- (void)setDidUpdateHiddenBlock:(id /* block */)arg0;
- (void)updateLayoutWithShowDesc:(BOOL)arg0;
- (void)updateLayoutWithShowDesc:(BOOL)arg0;
- (void)updateContentLabelAlpha:(double)arg0;
- (void)beginMonitor;
- (void)endMonitor;
- (void)setModel:(id)arg0;
- (id)model;
- (void)reset;

@end