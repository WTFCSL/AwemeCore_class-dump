//
//     Generated by private class-dump
//

@class HTSLiveBizPinAreaDisplayInfo;

@interface HTSLiveBizPinArea : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) HTSLiveBizPinAreaDisplayInfo *bizAreaDisplayInfo;
@property (nonatomic) BOOL hasBizAreaDisplayInfo;

+ (id)descriptor;

@end