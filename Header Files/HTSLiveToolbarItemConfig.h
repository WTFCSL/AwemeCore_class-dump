//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveToolbarItemConfig : IESLivePBBaseMessage

@property (nonatomic) int toolbarType;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) int displayType;
@property (retain, nonatomic) HTSLiveImage *dynamicIcon;
@property (nonatomic) BOOL hasDynamicIcon;
@property (retain, nonatomic) HTSLiveImage *iconVertical;
@property (nonatomic) BOOL hasIconVertical;
@property (retain, nonatomic) HTSLiveImage *dynamicBottomIcon;
@property (nonatomic) BOOL hasDynamicBottomIcon;
@property (retain, nonatomic) HTSLiveImage *bottomIcon;
@property (nonatomic) BOOL hasBottomIcon;
@property (retain, nonatomic) NSMutableArray *toastListArray;
@property (readonly, nonatomic) unsigned long long toastListArray_Count;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
