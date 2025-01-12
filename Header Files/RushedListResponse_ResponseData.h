//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray;

@interface RushedListResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) BOOL succeed;
@property (nonatomic) BOOL expired;
@property (nonatomic) long long diamondCount;
@property (nonatomic) int boxType;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *rushedListArray;
@property (readonly, nonatomic) unsigned long long rushedListArray_Count;

+ (id)descriptor;

@end
