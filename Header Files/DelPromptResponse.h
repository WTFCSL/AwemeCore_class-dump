//
//     Generated by private class-dump
//

@class DelPromptData, DelPromptExtra;

@interface DelPromptResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DelPromptData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) DelPromptExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
