//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface CorrectionResult : IESLivePBBaseMessage

@property (nonatomic) int idxOfText;
@property (copy, nonatomic) NSString *originalWord;
@property (retain, nonatomic) NSMutableArray *replaceWordsArray;
@property (readonly, nonatomic) unsigned long long replaceWordsArray_Count;

+ (id)descriptor;

@end
