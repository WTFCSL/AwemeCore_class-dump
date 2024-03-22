//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary;

@interface AWETeenSearchGuessViewModel : NSObject {
    BOOL _isFirst;
    NSArray *_guessWordList;
    NSString *_suggestLogId;
    NSDictionary *_logPassback;
}

@property (copy, nonatomic) NSArray *guessWordList;
@property (copy, nonatomic) NSString *suggestLogId;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL isFirst;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setIsFirst:(BOOL)arg0;
- (id)suggestLogId;
- (void)setSuggestLogId:(id)arg0;
- (void)fetchAfterWatchKeyWordListCompletion:(id /* block */)arg0;
- (void)fetchGuessKeyWordListCompletion:(id /* block */)arg0;
- (id)guessWordList;
- (void)setGuessWordList:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isFirst;

@end