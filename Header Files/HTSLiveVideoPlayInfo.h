//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveVideoPlayInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *format;
@property (retain, nonatomic) NSMutableArray *playUrlsArray;
@property (readonly, nonatomic) unsigned long long playUrlsArray_Count;
@property (copy, nonatomic) NSString *postURL;

+ (id)descriptor;

@end
