//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MUIWebDocumentView, NSArray, NSAttributedString;

@interface MUIMIMEDocumentGenerator : NSObject
{
    NSArray *_mimeParts;
    NSAttributedString *_plainTextAlternative;
    MUIWebDocumentView *_webDocumentView;
}

- (void)asyncGenerateHTMLDocument:(id)arg1;
- (id)init;
- (id)initWithWebDocument:(id)arg1;
- (id)initWithWebDocumentView:(id)arg1;
@property(retain, nonatomic) NSArray *mimeParts; // @synthesize mimeParts=_mimeParts;
@property(retain, nonatomic) NSAttributedString *plainTextAlternative; // @synthesize plainTextAlternative=_plainTextAlternative;
@property(retain, nonatomic) MUIWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;

@end

