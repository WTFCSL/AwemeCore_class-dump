//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface HistoryTextItem : IESLivePBBaseMessage

@property (retain, nonatomic) NSNumber *localTimeStamp;
@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long textType;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

- (id)localTimeStamp;
- (void)setLocalTimeStamp:(id)arg0;

@end