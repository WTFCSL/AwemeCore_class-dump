//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveLinkmicInteractEntrance : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *buttonInfosArray;
@property (readonly, nonatomic) unsigned long long buttonInfosArray_Count;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long entranceId;
@property (copy, nonatomic) NSString *nameColor;

+ (id)descriptor;

@end
