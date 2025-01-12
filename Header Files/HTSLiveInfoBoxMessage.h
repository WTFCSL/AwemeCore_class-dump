//
//     Generated by private class-dump
//

@class HTSLiveText, NSString, HTSLiveCommon, HTSLiveInfoBoxMessageBackGround;

@interface HTSLiveInfoBoxMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *subScene;
@property (nonatomic) long long msgType;
@property (nonatomic) long long delay;
@property (retain, nonatomic) HTSLiveText *title;
@property (nonatomic) BOOL hasTitle;
@property (retain, nonatomic) HTSLiveText *foldTitle;
@property (nonatomic) BOOL hasFoldTitle;
@property (retain, nonatomic) HTSLiveText *content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) long long dragType;
@property (retain, nonatomic) HTSLiveInfoBoxMessageBackGround *background;
@property (nonatomic) BOOL hasBackground;

+ (id)descriptor;

@end
