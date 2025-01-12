//
//     Generated by private class-dump
//

@class NSArray, UIView;

@interface IESLiveChatChannelGreetView : UIView {
    BOOL _disableClick;
    id /* block */ _didClickedGreet;
    long long _showNums;
    UIView *_greetEmojisContainer;
    NSArray *_greetModels;
    long long _greetsShowNums;
}

@property (retain, nonatomic) UIView *greetEmojisContainer;
@property (retain, nonatomic) NSArray *greetModels;
@property (nonatomic) long long greetsShowNums;
@property (nonatomic) BOOL disableClick;
@property (copy, nonatomic) id /* block */ didClickedGreet;
@property (nonatomic) long long showNums;

- (void)setDisableClick:(BOOL)arg0;
- (BOOL)disableClick;
- (id)initWithGreetModels:(id)arg0;
- (void)disableClick:(BOOL)arg0;
- (void)setDidClickedGreet:(id /* block */)arg0;
- (void)setupGreetEmojisContainer;
- (id)greetEmojisContainer;
- (void)setGreetEmojisContainer:(id)arg0;
- (id)greetModels;
- (long long)greetsShowNums;
- (void)didClicked:(id)arg0;
- (void)refreshWithNums:(long long)arg0;
- (void)setGreetsShowNums:(long long)arg0;
- (id /* block */)didClickedGreet;
- (long long)showNums;
- (void)setShowNums:(long long)arg0;
- (void)setGreetModels:(id)arg0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
