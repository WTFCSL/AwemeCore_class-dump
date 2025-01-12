//
//     Generated by private class-dump
//

@class IESLiveKTVSongIndicatorView;
@protocol IESLiveKTVPreStreamDataSource;

@interface IESLiveKTVFeedView : UIView {
    id<IESLiveKTVPreStreamDataSource> _dataSource;
    IESLiveKTVSongIndicatorView *_indicator;
}

@property (retain, nonatomic) IESLiveKTVSongIndicatorView *indicator;
@property (weak, nonatomic) id<IESLiveKTVPreStreamDataSource> dataSource;

- (void)removeKTVIndicator;
- (void)setUpIndicator;
- (void)receiveKTVSei:(id)arg0;
- (void)receiveMidiSei:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setIndicator:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)indicator;
- (void)dealloc;
- (void)reset;

@end
