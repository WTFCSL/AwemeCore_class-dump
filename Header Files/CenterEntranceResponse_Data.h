//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray;

@interface CenterEntranceResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL disable;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *URLScheme;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *collectionsArray;
@property (readonly, nonatomic) unsigned long long collectionsArray_Count;

+ (id)descriptor;

@end
