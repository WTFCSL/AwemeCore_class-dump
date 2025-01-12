//
//     Generated by private class-dump
//

@class ACCTextErrorContentView, NSString;

@interface ACCTextErrorPopover : DUXPopover {
    id /* block */ _tapTextAction;
    id /* block */ _tapIgnoreAction;
    long long _offset;
    long long _length;
    NSString *_originalText;
    NSString *_replacement;
    ACCTextErrorContentView *_contentView;
}

@property (retain, nonatomic) ACCTextErrorContentView *contentView;
@property (copy, nonatomic) id /* block */ tapTextAction;
@property (copy, nonatomic) id /* block */ tapIgnoreAction;
@property (nonatomic) long long offset;
@property (nonatomic) long long length;
@property (copy, nonatomic) NSString *originalText;
@property (copy, nonatomic) NSString *replacement;

- (id /* block */)tapIgnoreAction;
- (id /* block */)tapTextAction;
- (void)setTapTextAction:(id /* block */)arg0;
- (void)setTapIgnoreAction:(id /* block */)arg0;
- (id)initWithContentText:(id)arg0 target:(id)arg1;
- (void)setLength:(long long)arg0;
- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (void)setOriginalText:(id)arg0;
- (long long)length;
- (long long)offset;
- (id)originalText;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (id)replacement;
- (void)setReplacement:(id)arg0;

@end
