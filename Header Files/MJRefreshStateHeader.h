//
//     Generated by private class-dump
//

@class UILabel, NSMutableDictionary;

@interface MJRefreshStateHeader : MJRefreshHeader {
    UILabel *_lastUpdatedTimeLabel;
    UILabel *_stateLabel;
    id /* block */ _lastUpdatedTimeText;
    double _labelLeftInset;
    NSMutableDictionary *_stateTitles;
}

@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (copy, nonatomic) id /* block */ lastUpdatedTimeText;
@property (readonly, weak, nonatomic) UILabel *lastUpdatedTimeLabel;
@property (nonatomic) double labelLeftInset;
@property (readonly, weak, nonatomic) UILabel *stateLabel;

- (void)placeSubviews;
- (void)setStateTitles:(id)arg0;
- (id)stateTitles;
- (void)setLabelLeftInset:(double)arg0;
- (void)setLastUpdatedTimeKey:(id)arg0;
- (id)lastUpdatedTimeLabel;
- (double)labelLeftInset;
- (id /* block */)lastUpdatedTimeText;
- (void)setLastUpdatedTimeText:(id /* block */)arg0;
- (void)setTitle:(id)arg0 forState:(long long)arg1;
- (void).cxx_destruct;
- (void)setState:(long long)arg0;
- (void)prepare;
- (id)currentCalendar;
- (id)stateLabel;

@end