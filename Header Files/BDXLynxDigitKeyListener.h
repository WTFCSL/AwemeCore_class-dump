//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface BDXLynxDigitKeyListener : BDXLynxNumberKeyListener {
    BOOL _decimal;
    BOOL _sign;
    NSArray *_CHARACTERS;
    NSString *_mDecimalPointChars;
    NSString *_mSignChars;
}

@property (readonly, nonatomic) NSArray *CHARACTERS;
@property (nonatomic) NSString *mDecimalPointChars;
@property (nonatomic) NSString *mSignChars;

- (id)getAcceptedChars;
- (id)CHARACTERS;
- (id)filter:(id)arg0 start:(long long)arg1 end:(long long)arg2 dest:(id)arg3 dstart:(long long)arg4 dend:(long long)arg5;
- (id)mSignChars;
- (id)mDecimalPointChars;
- (id)initWithParamsNeedsDecimal:(BOOL)arg0 sign:(BOOL)arg1;
- (void)setMDecimalPointChars:(id)arg0;
- (void)setMSignChars:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)getInputType;

@end