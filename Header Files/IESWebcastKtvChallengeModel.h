//
//     Generated by private class-dump
//

@class NSString;

@interface IESWebcastKtvChallengeModel : IESLiveWebcastBaseModel {
    BOOL _shouldStart;
    NSString *_sourceParams;
}

@property (copy, nonatomic) NSString *sourceParams;
@property (nonatomic) BOOL shouldStart;

- (id)sourceParams;
- (void)setSourceParams:(id)arg0;
- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg0;
- (BOOL)shouldStart;
- (void)setShouldStart:(BOOL)arg0;

@end