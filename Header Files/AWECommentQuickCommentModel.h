//
//     Generated by private class-dump
//

@class NSArray;

@interface AWECommentQuickCommentModel : AWEBaseApiModel {
    NSArray *_constantWords;
    NSArray *_timedWords;
}

@property (retain, nonatomic) NSArray *constantWords;
@property (retain, nonatomic) NSArray *timedWords;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setConstantWords:(id)arg0;
- (void)setTimedWords:(id)arg0;
- (id)constantWords;
- (id)timedWords;
- (void).cxx_destruct;

@end