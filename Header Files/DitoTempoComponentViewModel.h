//
//     Generated by private class-dump
//

@class UIView, NSString, NSDictionary, DitoTempoComponentView, _TtC8TempoiOS13TempoTemplate, DitoTempoExtension, DitoNode;

@interface DitoTempoComponentViewModel : DitoComponentViewModel {
    BOOL _didPublishEventAfterLoad;
    BOOL _shouldDealWithShow;
    BOOL _shouldDealWithCompleteShow;
    DitoTempoComponentView *_cell;
    DitoTempoExtension *_tempoExtension;
    DitoNode *_tempoNode;
    _TtC8TempoiOS13TempoTemplate *_templete;
    NSDictionary *_data;
    double _maxWidth;
    long long _position;
    UIView *_rootView;
    unsigned long long _state;
    NSDictionary *_queryItems;
    NSDictionary *_bizData;
    NSString *_reuseID;
    struct CGSize { double width; double height; } _sizeOfComponent;
}

@property (retain, nonatomic) _TtC8TempoiOS13TempoTemplate *templete;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *bizData;
@property (readonly, nonatomic) NSDictionary *extraData;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSString *reuseID;
@property (nonatomic) double presetHeight;
@property (nonatomic) BOOL shouldDealWithShow;
@property (nonatomic) BOOL shouldDealWithCompleteShow;
@property (weak, nonatomic) DitoTempoComponentView *cell;
@property (weak, nonatomic) DitoTempoExtension *tempoExtension;
@property (weak, nonatomic) DitoNode *tempoNode;
@property (nonatomic) struct CGSize { double width; double height; } sizeOfComponent;
@property (nonatomic) long long position;
@property (weak, nonatomic) UIView *rootView;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL didPublishEventAfterLoad;

- (void)setBizData:(id)arg0;
- (id)bizData;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (void)bindStateAndAction;
- (void)componentViewDidCompleteShow;
- (id)componentReuseIdentifier;
- (void)componentViewWillShow;
- (void)componentViewDidEndShow;
- (id)extraComponentTrackParams;
- (id)tempoExtension;
- (void)setTempoExtension:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeOfComponent;
- (BOOL)didPublishEventAfterLoad;
- (void)setDidPublishEventAfterLoad:(BOOL)arg0;
- (void)setSizeOfComponent:(struct CGSize { double x0; double x1; })arg0;
- (void)setTempoNode:(id)arg0;
- (id)parseTemplete:(id)arg0;
- (void)setTemplete:(id)arg0;
- (id)parseQueryItems:(id)arg0;
- (void)setShouldDealWithShow:(BOOL)arg0;
- (void)setShouldDealWithCompleteShow:(BOOL)arg0;
- (id)templete;
- (id)tempoNode;
- (BOOL)shouldDealWithShow;
- (BOOL)shouldDealWithCompleteShow;
- (void)setReuseID:(id)arg0;
- (id)queryItems;
- (id)data;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setMaxWidth:(double)arg0;
- (id)initWithNode:(id)arg0;
- (void)setState:(unsigned long long)arg0;
- (long long)position;
- (void)setData:(id)arg0;
- (void)setPosition:(long long)arg0;
- (double)maxWidth;
- (void)setQueryItems:(id)arg0;
- (id)cell;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (void)setCell:(id)arg0;
- (id)reuseID;
- (id)extraData;

@end
