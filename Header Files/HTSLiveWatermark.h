//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface HTSLiveWatermark : IESLivePBBaseMessage

@property (nonatomic) long long position;
@property (nonatomic) long long landscapeDis;
@property (nonatomic) long long verticalDis;
@property (retain, nonatomic) NSMutableArray *watermarkIconArray;
@property (readonly, nonatomic) unsigned long long watermarkIconArray_Count;

+ (id)descriptor;

@end
